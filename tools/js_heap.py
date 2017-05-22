
from heap import Heap

from global_value import *



from object_heap import *

from ar_heap import *


class JSHeap(object):
	def __init__(self):
		self.object_heap = ObjectHeap()
		self.ar_heap = ARHeap()
		self.heap_addr_stack = []

	# just append but not reference yet ,so you dont need to increase count now
	def append_normal_object(self,object_value,object_type=None):
		heap_addr = self.object_heap.append_normal_object(object_value,
			self.ar_heap.current_ar_addr,
			object_type)

		self.heap_addr_stack.append(heap_addr)

	def append_func_object(self,func_code_addr):
		dynamic_offset = self.ar_heap.get_dynamic_offset()
		heap_addr = self.object_heap.append_func_object(func_code_addr,
			self.ar_heap.current_ar_addr,
			dynamic_offset
			)

		self.heap_addr_stack.append(heap_addr)
	
	def append_object(self,x,object_type=None):
		if object_type=='func':
			self.append_func_object(x)
		else:
			self.append_normal_object(x,object_type)

	def declare_local_variable(self,object_name):
		self.ar_heap.set_local_variable(object_name,None)

	def set_local_variable(self,object_name,heap_addr):
		self.ar_heap.set_local_variable(object_name,heap_addr)

	def set_global_variable(self,object_name,heap_addr):
		if self.ar_heap.set_global_variable(object_name,heap_addr)==-1:
			self.error("%s unreference variable\n"%object_name)

	def get_object_addr(self,object_name):
		heap_addr = self.ar_heap.get_variable_addr(object_name)
		if heap_addr==-1:
			self.error("%s unreference variable!\n"%object_name)
		# elif heap_addr==None:
		# 	self.error("uninitialized variable!\n")
		else:
			return heap_addr

	def check_local_variable(self,object_name):
		return self.ar_heap.current_ar.check_variable_exist(object_name)

	def get_object(self,heap_addr):
		if heap_addr==None:
			self.error("param addr is None!\n")
		return self.object_heap.get_object(heap_addr)

	def set_object(self,object_name,new_heap_addr=None):
		if new_heap_addr==None:
			# get addr from statck
			new_heap_addr = self.heap_addr_stack.pop()
		old_heap_addr = self.get_object_addr(object_name)

		self.set_global_variable(object_name,new_heap_addr)

 
	def prepare_before_call(self,heap_addr):
		# create a environment and store previous environment
		# handle current ar first
		eip = get_eip()
		self.heap_reduce()
		if not self.ar_heap.check_addr_exist(self.ar_heap.current_ar_addr):
			self.ar_heap.append(self.ar_heap.current_ar,self.ar_heap.current_ar_addr)

		# then handle new ar
		func_object = self.get_object(heap_addr)
		new_static_arp = func_object.static_arp
		new_static_offset = func_object.static_offset

		# update current ar and its addr
		self.ar_heap.current_ar = ActivateRecord(new_static_arp,
			new_static_offset,
			self.ar_heap.current_ar_addr)
		self.ar_heap.current_ar.return_code_addr=eip+1
		self.ar_heap.current_ar_addr = self.ar_heap.get_new_addr()
		set_eip(func_object.object_value)
		

	def prepare_after_call(self,argv=None):
		# handle argv
		pass

	def prepare_before_return(self):

		# store current ar
		if not self.ar_heap.check_addr_exist(self.ar_heap.current_ar_addr):
			self.ar_heap.append(self.ar_heap.current_ar,self.ar_heap.current_ar_addr)
		ar_addr = self.ar_heap.current_ar_addr
		# update environment
		set_eip(self.ar_heap.current_ar.return_code_addr)
		self.ar_heap.current_ar_addr = self.ar_heap.current_ar.caller_arp
		self.ar_heap.current_ar = self.ar_heap.get_object(self.ar_heap.current_ar_addr)

		self.ar_reduce(ar_addr)

	def prepare_after_return(self):
		pass

	def error(self,msg):
		print msg
		raise Exception(msg)

	def info(self,msg):
		print msg


	def heap_reduce(self):
		if self.ar_heap.current_ar_addr==0:
			self.mark_all_available()
			self.object_heap.reduce()

	def ar_reduce(self,arp):
		if not self.check_ar_available(arp):
			self.ar_heap.delete(arp)

	def mark_all_available(self):
		temp_ar_addr = 0
		temp_ar = self.ar_heap.get_object(temp_ar_addr)
		local_table = temp_ar.local_table
		for key in local_table.keys():
			if local_table[key]==None:
				continue
			else:
				self.mark_available(local_table[key])


	def mark_normal_available(self,heap_addr):
		self.object_heap.mark_available(heap_addr)

	def mark_func_available(self,heap_addr):
		self.object_heap.mark_available(heap_addr)
		func_object = self.get_object(heap_addr)
		static_arp = func_object.static_arp
		static_offset = func_object.static_offset
		self.mark_available_global(static_arp,static_offset)

	def mark_available(self,heap_addr):
		if self.check_already_mark(heap_addr):
			return
		heap_object = self.get_object(heap_addr)
		if heap_object.object_type=='func':
			self.mark_func_available(heap_addr)
		else:
			self.mark_normal_available(heap_addr)


	def mark_available_local(self,arp,offset):
		ar = self.ar_heap.get_object(arp)
		local_table_keys = ar.local_table.keys()
		for index in range(offset-1):
			object_name = local_table_keys[index]
			heap_addr = ar.get_variable_addr(object_name)
			if heap_addr==None:
				continue
			self.mark_available(heap_addr)

	def mark_available_global(self,start_arp,start_offset):
		arp = start_arp
		offset = start_offset
		while True:
			if arp==-1:
				return
			else:
				self.mark_available_local(arp,offset)
				ar = self.ar_heap.get_object(arp)
				arp = ar.static_arp
				offset = ar.static_offset

	def check_already_mark(self,heap_addr):
		if heap_addr in self.object_heap.assessble_addr:
			return True
		return False

	def check_ar_available(self,arp):
		ar = self.ar_heap.get_object(arp)
		local_table = ar.local_table
		values = local_table.values()
		for value in values:
			if value in self.object_heap.assessble_addr:
				return True
		return False




