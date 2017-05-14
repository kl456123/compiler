#!/usr/bin/env python


eip = 0


def set_eip(code_addr):
	global eip
	eip = code_addr

def get_eip():
	global eip
	return eip

def incre_eip():
	global eip
	eip+=1


if __name__=='__main__':
	pass
