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



# def check_directive(line):
# 	direct , sep, operat = line.partition(" ")
# 	# deafault all is two-operator
# 	if(direct and operat):
# 		return True
# 	return False


# line = "push"

# print check_directive(line)
# 
# def run_error(msg):
# 	print msg

# a=10

# msg = "res%d\n" %a

# run_error(msg)

# def interpret_directive(line):
# 	direct , sep, tail = line.partition(" ")
# 	print(direct,tail)

# interpret_directive(msg)
a = {"ad":10,"asf":100,"asfa":10}

print set(a.values())
