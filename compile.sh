#!/bin/bash

alias python3="/Library/Frameworks/Python.framework/Versions/3.11/bin/python3"
#export BUDDY_NO_VIRTUALENV=1

python utils/build.py --preset mini --build-type release
