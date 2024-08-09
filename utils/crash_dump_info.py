import argparse
import mmap
import sys
import struct
import subprocess
import re
from pathlib import Path

parser = argparse.ArgumentParser(
    prog='crash_dump_info',
    description='Scans the provided dump file for build info and writes it up')
parser.add_argument("dumpfile", type=Path)
parser.add_argument("-c",
                    "--checkout",
                    action="store_true",
                    help="Checks out the corresponding commit")

printer_name_by_code = {
    13: "MK4",
    23: "MK3.5",
    12: "MINI",
    17: "XL",
    16: "iX",
    18: "XL_DEV_KIT"
}

translations = ["cs", "de", "es", "fr", "it", "pl", "ja"]

args = parser.parse_args()
file = open(args.dumpfile, "rb")

# Map the file into a bytes-like object
file_bytes = mmap.mmap(file.fileno(), 0, access=mmap.ACCESS_READ)

build_info_marker = b"#BUILDID#\0"
build_info_offset = file_bytes.find(build_info_marker)
if build_info_offset == -1:
    sys.exit("Could not find BUILDID record in the provided file")

# Parse the binary struct
struct_format = "<41s48sHB??"
struct_start_offset = build_info_offset + len(build_info_marker)
struct_end_offset = struct_start_offset + struct.calcsize(struct_format)
packed_struct = bytes(file_bytes[struct_start_offset:struct_end_offset])

try:
    unpacked_struct = struct.unpack(struct_format, packed_struct)
except:
    sys.exit("BUILDID record found, but failed to parse")

(commit_hash, project_version, translation_bits, printer_code, commit_dirty,
 has_bootloader) = unpacked_struct

commit_hash = commit_hash.decode("utf-8").split('\0')[0]
project_version = project_version.decode("utf-8").split('\0')[0]
printer_str = printer_name_by_code.get(printer_code, f"#{printer_code}")
bootloader_str = ("boot" if has_bootloader else "noboot")
dirty_str = (" DIRTY" if commit_dirty else "")

# Determine enabled translations
enabled_translations = [
    tr for i, tr in enumerate(translations) if translation_bits & (1 << i)
]

# Determine build preset name
if printer_str == "MINI":
    build_preset_tr_str = "-en-" + '-'.join(enabled_translations)
else:
    build_preset_tr_str = ""

build_preset = f"{printer_str.lower()}{build_preset_tr_str}_release_{bootloader_str}"
build_filename = f"{build_preset}_{project_version}"

print(f"Printer type: {printer_str} {bootloader_str}")
print(f"Translations: {', '.join(enabled_translations)}")
print(f"Build preset: {build_preset}")
print(f"Project version: {project_version}")
print(f"Commit hash: {commit_hash}{dirty_str}")
print(f"Filename: {build_filename}")

# Check that the commit_hash is actually a commit hash. Some nasty dumps might try to do injection attacks here.
if re.fullmatch(r"^[0-9a-f]+$", commit_hash) is None:
    sys.exit("!!! Invalid commit hash")

# Print newline separating the info header
print()

if args.checkout:
    if subprocess.check_output(["git", "status", "-s"]) != b"":
        sys.exit("!!! Checkout refused, you have uncommited changes")

    print(f"Checking out...")
    subprocess.call(["git", "checkout", commit_hash])
    print(f"Check out.")
