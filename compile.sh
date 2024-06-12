#!/bin/bash

export BUDDY_NO_VIRTUALENV=1

python utils/build.py --preset mini --build-type release
