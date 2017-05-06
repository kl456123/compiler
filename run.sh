#!/usr/bin/env bash

./parser < test/test.js > result/test.asm
python tools/pysim.py result/test.asm