#!/usr/bin/env python

import sys
import os
from heap import Heap
from js_heap import JSHeap


ebp = 0
esp = 0
eip = 0

comment_mark = ";%"

code = []




class Table():
	def __init__(self):
		self.labels_table = {}

	def get_code_addr(self,label_name):
		if label_name not in labels_table.key():
			run_error(None,"error\n")
		return labels_table[label_name]



table = Table()
heap = JSHeap()



def assemb_error(line, msg):
	pass

def run_error(line,msg):
	pass



# interpret code
def interpret_directive(line):
	direct , sep, tail = line.partition(" ")
	code.append((direct,tail))

def interpret_labels(line,table):
	global code
	global heap
	

	line = line[:-1]

	# handle function label and condition label separetly

	if(check_func_label(line)):
	 	# function label
	 	# not function name !
	 	func_label = line
 		if(check_func_beg_or_end(line)):
 			code.append(("FUNCBEG",func_label))
 		else:
 			code.append(("FUNCEND",func_label))
 	static_addr = len(code)
	table.labels_table[line] = static_addr


def interpret_comments(line):
	pass

# check code
def check_comments(line):
	if(line and line[0] in comment_mark):
		return True
	return False

def check_labels(line):
	if(":" in line):
		return True
	return False

def check_func_label(line):
	if(line[:4]=="FUNC"):
		return True
	return False

def check_func_beg_or_end(line):
	if("BEG" in line):
		return True
	elif("END" in line):
		return False
	assemb_error(line,"invalid function label\n")

def check_directive(line):
	direct , sep, operat = line.partition(" ")
	# deafault all is two-operator
	if(direct and operat):
		return True
	return False

def check_spaces(line):
	if(line ==""):
		return True
	return False


def is_validate_id(object_id):
	pass

def is_num(object_id):
	for ch in object_id:
		if not (ch=='.' or ch.isalnum()):
			return False
	return True

def is_float(object_id):
	if '.' in object_id:
		return True
	return False

def is_str(object_id):
	if("\"" in object_id or "\'" in object_id):
		return True
	return False

def is_func(object_id):
	if("@" in object_id):
		return True
	return False

def assemb(asm_filename,table):
	global code
	# read lines from asm code
	for line in file(asm_filename):
		line = line.strip()
		if(check_spaces(line)):
			continue
		# filter comments
		elif(check_comments(line)):
			# handle comments code if you would like to 
			interpret_comments(line)
			continue

		elif(check_labels(line)):
			interpret_labels(line,table)

		elif(check_directive(line)):
			interpret_directive(line)
		else:
			assemb_error(line,"can not be recognized line\n")
	code.append(("exit","0"))


# run the code by eip 
def run(heap,table):
	global code
	global eip
	global heap
	global table
	# init environment
	
	while True:
		direct,arg = code[eip]
		action  = eval("do_"+direct)
		next_eip = action(arg)
		if next_eip:
			eip = next_eip
		else:
			eip +=1
	

	

def do_var(arg):
	global heap
	if heap.check_local_variable(arg):
		heap.declare_local_valuable(arg)
	else:
		run_error("double declare\n!")

def do_push(arg):

	global table
	global heap
	object_type = None
	if is_num(arg):
		object_type = 'float' if is_float(arg) else 'int'
	elif is_str(arg):
		object_type = 'str'
	elif is_func(arg):
		object_type='func'
		func_label = 'FUNC_BEG_' + arg[1:]
		func_code_addr = table.get_code_addr(func_label)
		arg = func_code_addr
	else:
		object_type='var'
	heap.append_object(arg,object_type)

def do_pop(arg):
	global heap
	# auto get the stack top as its addr
	heap.set_object(arg)

def do_call(arg):
	global heap
	heap_addr = heap.get_object_addr(arg)
	heap.prepare_before_call(heap_addr)

def do_ret(arg):
	global heap

	heap.prepare_before_return()



def do_jmp(arg):
	global heap,table
	code_addr = table.get_code_addr(arg)
	return code_addr

def do_cmp(arg):
	pass

def do_add(arg,heap,table):
	pass

def do_sub(arg,heap,table):
	pass
def do_mul(arg,heap,table):
	pass
def do_div(arg,heap,table):
	pass

	

if __name__=="__main__":
	
	asm_filename = sys.argv[1]
	assemb(asm_filename,table)
	run(heap,table)