#!/usr/bin/env python

import sys
import os
from heap import Heap
from js_heap import JSHeap
from global_value import *

# ebp = 0
# esp = 0
# eip = 0

comment_mark = ";%"
global_func=['print']
code = []

type_level={'int':0,'float':1}

level_type={0:'int',1:'float'}

def get_result_type(type_a,type_b):
	global type_level,level_type
	level_a = type_level[type_a]
	level_b = type_level[type_b]
	level_result = level_a if level_a>level_b else level_b
	return level_type[level_result]

class Table():
	def __init__(self):
		self.labels_table = {}

	def get_code_addr(self,label_name):
		if label_name not in self.labels_table.keys():
			run_error(None,"%s error\n"%label_name)
		return self.labels_table[label_name]







table = Table()
heap = JSHeap()


def run_error(line,msg):
	print msg
	exit(-1)

# inner function
def do_print(fmt):
	global heap
	stack = heap.heap_addr_stack
	if len(fmt) < 2 or fmt[0] != fmt[-1] or fmt[0] not in '"\'':
    		run_error("Format string error")
	argc = fmt.count("%f") + fmt.count("%d")
	heap_addr_array = stack[len(stack) - argc:]

	res_array = []
	for heap_addr in heap_addr_array:
		res_array.append(heap.get_object(heap_addr).object_value)
	out = fmt[1:-1] % tuple(res_array)
	print out
	del stack[len(stack) - argc:]

def assemb_error(line, msg):
	print line,msg
	exit(-1)





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
	if ":" in line and "\'" not in line and "\"" not in line:
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
	if(direct):
		return True
	return False

def check_spaces(line):
	if(line ==""):
		return True
	return False

def is_num(object_id):
	for ch in object_id:
		if not (ch=='.' or ch.isdigit() or ch=='-'):
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
def run():
	global code
	# global eip
	
	global heap
	global table
	# init environment
	
	while True:
		direct,arg = code[get_eip()]
		action  = eval("do_"+direct)
		next_eip = action(arg)
		if not next_eip==None:
			set_eip(next_eip)
		else:
			incre_eip()

def do_var(arg):
	global heap
	if not heap.check_local_variable(arg):
		heap.declare_local_variable(arg)
	else:
		run_error(None,"%s double declare\n!"%arg)

def do_push(arg):

	global table
	global heap
	object_type = None
	if is_num(arg):
		if is_float(arg):
			object_type = 'float'
			arg = float(arg)
		else:
			object_type = 'int'
			arg = int(arg)
	elif is_str(arg):
		object_type = 'str'
	elif is_func(arg):
		object_type='func'
		func_label = 'FUNC_BEG_' + arg[1:]
		func_code_addr = table.get_code_addr(func_label)
		arg = func_code_addr
	if object_type:
		heap.append_object(arg,object_type)
		return

	heap_addr = heap.get_object_addr(arg)
	if heap_addr==None:
		if arg=='':
			arg = 'blank'
		run_error("%s uninitialized variable!\n"%arg)
	# heap_object = heap.get_object(heap_addr)
	# object_type = heap_object.object_type
	# arg = heap_object.object_value
	heap.heap_addr_stack.append(heap_addr)
	

def do_pop(arg):
	global heap
	# auto get the stack top as its addr
	if arg=='':
		return None
	heap.set_object(arg)

def do_call(arg):
	global heap
	# global global_func
	# if arg in global_func:
	global do_print
	if arg=='print':
		fmt_heap_addr = heap.heap_addr_stack[-2]
		fmt = heap.get_object(fmt_heap_addr)
		del heap.heap_addr_stack[-2]
		do_print(fmt.object_value)
		return None
	heap_addr = heap.get_object_addr(arg)
	if heap_addr==None:
		if arg=='':
			arg = 'blank'
		run_error(None,"%s uninitialized variable!\n"%arg)
	heap.prepare_before_call(heap_addr)
	return get_eip()

def do_ret(arg):
	global heap
	heap.prepare_before_return()
	return get_eip()




def do_jmp(arg):
	global heap,table
	code_addr = table.get_code_addr(arg)
	return code_addr


def do_jz(arg):
	global heap,table
	new_eip = table.get_code_addr(arg)
	heap_addr = heap.heap_addr_stack.pop()
	heap_object = heap.get_object(heap_addr)
	if heap_object.object_value == 0:
		return new_eip
	else:
		return None

def do_two_op(op):
	global heap
	heap_addr_a = heap.heap_addr_stack.pop()
	heap_addr_b = heap.heap_addr_stack.pop()
	a = heap.get_object(heap_addr_a)
	b = heap.get_object(heap_addr_b)
	c_value = op(b.object_value,  a.object_value)
	c_type = get_result_type(a.object_type,b.object_type)
	heap.append_object(c_value,c_type)

	# at last we should decrease sth
	heap.check_object_count(heap_addr_a)
	heap.check_object_count(heap_addr_b)

def div(a,b):
	return a/b

def mul(a,b):
	return a*b

def add(a,b):
	return a+b

def sub(a,b):
	return a-b

def do_add(arg):
	global add
	do_two_op(add)

def do_sub(arg):
	global sub
	do_two_op(sub)

def do_mul(arg):
	global mul
	do_two_op(mul)

def do_div(arg):
	global div
	do_two_op(div)

def do_FUNCBEG(arg):
	global table
	end_func_label = arg.replace("BEG","END")
	end_code_addr = table.get_code_addr(end_func_label) 
	return end_code_addr
def do_FUNCEND(arg):
	do_ret('')

def do_arg(arg):
	global heap
	argv = arg.split(",")
	length = len(argv)
	# assign from right to left by order
	while length:
		length-=1
		heap.declare_local_variable(argv[length])
		# heap_addr = heap.heap_addr_stack.pop()
		heap.set_object(argv[length])

def do_exit(arg):
	exit(int(arg))

def do_cmpeq(arg):
	# global heap
	do_two_op(cmpeq)

def cmpeq(a,b):
	return int(a==b)

def do_cmpgt(arg):
	
	do_two_op(cmpgt)

def cmpgt(a,b):
	return int(a>b)

def do_cmplt(arg):
	do_two_op(cmplt)
def cmplt(a,b):
	return int(a<b)

def do_cmpne(arg):
	do_two_op(cmpne)
def cmpne(a,b):
	return int(not a==b)

def do_and(arg):
	do_two_op(_and)
def _and(a,b):
	return int(a and b)
def do_or(arg):
	do_two_op(_or)

def _or(a,b):
	return int(a or b)

if __name__=="__main__":
	
	asm_filename = sys.argv[1]
	assemb(asm_filename,table)
	run()