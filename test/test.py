#!/usr/bin/env bash


# stack = []

# (value=False,address)
# or
# (value=True,value)


# # auto allocate and reduce memorry
# heap = []
# (count,object)


# # map value name to address in the stack
# value_table = []

# type_ call by value or call by referenc



def is_num(object_id):
	for ch in object_id:
		if not (ch=='.' or ch.isalnum()):
			return False
	return True



a = "1513.2"

print a.isdigit

