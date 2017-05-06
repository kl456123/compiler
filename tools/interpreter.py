#!/usr/bin/env python

ebp = 0
esp = 0
eip = 0

# stack = []

frame = []
heap = []

code = []

# store ARP
display = []

activated_record = {}


class Heap():
    def __init__(self):
        pass

    def clean(self):
        pass

    def


def assemb_error(line, msg):
    display(pause=False)
    print line
    print "^^^Error at last line: %s" % msg
    exit(-1)
