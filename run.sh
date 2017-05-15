#!/usr/bin/env bash
# python tools/pysim.py result/test.asm
./parser < test/test.js > result/test.asm && python tools/interpreter.py result/test.asm