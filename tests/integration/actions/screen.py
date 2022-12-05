import asyncio
import logging
import functools
import io
from time import sleep

import pytesseract
from PIL import Image

from simulator import Printer, MachineType
from ..extra.timeout import timeoutable

logger = logging.getLogger(__name__)


async def take_screenshot(printer: Printer) -> Image.Image:
    return await printer.screen_take_screenshot()


async def read(printer: Printer):
    screenshot = await take_screenshot(printer)
    text = await asyncio.get_event_loop().run_in_executor(
        None,
        functools.partial(getData, screenshot))
    logger.info('text on screen: %s', text)
    sleep(1)
    return text


def getData(image):
    text = pytesseract.image_to_string(image)
    return ' '.join(text.split())
    # with tesserocr.PyTessBaseAPI() as api:
    #     api.SetImage(image)
    #     boxes = api.GetComponentImages(tesserocr.RIL.TEXTLINE, True)
    #     words = []
    #     logger.info('Found {} textline image components.'.format(len(boxes)))
    #     for i, (im, box, _, _) in enumerate(boxes):
    #         api.SetRectangle(box['x'], box['y'], box['w'], box['h'])
    #         word = api.GetUTF8Text()
    #         logger.info('Word: {}'.format(word))
    #         words += [word.strip()]
    #     return ' '.join(words)

@timeoutable
async def wait_for_text(printer: Printer, text):
    while True:
        text_on_screen = await read(printer)
        if text in text_on_screen:
            return text_on_screen


async def is_on_homescreen(printer: Printer):
    text = await read(printer)
    fragments = 'preheat', 'settings'
    return all(fragment in text.lower() for fragment in fragments)


async def is_booting(printer: Printer):
    text = await read(printer)
    if not text.strip():
        # the simulator might start with an empty/black
        return True
    if printer.machine == MachineType.MINI and text.strip():
        # after the black screen, we might catch MINI's loading screen
        fragments = 'loadin', 'looking for bbf', 'preparing bootstrap', 'copying', 'installing files'
        return any(fragment in text.lower() for fragment in fragments)
    return False
