
from heap import Heap



eip = 0

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
			self.ar_heap.current_ar,
			object_type)

		self.heap_addr_stack.append(heap_addr)

	def append_func_object(self,func_code_addr):
		dynamic_offset = self.ar_heap.get_dynamic_offset()
		heap_addr = self.object_heap.append_func_object(func_code_addr,
			self.ar_heap.current_ar,
			dynamic_offset
			)

		self.heap_addr_stack.append(heap_addr)

	def append_variable_object(self,object_name):
		heap_addr = self.get_object_addr(object_name)
		if heap_addr:
			self.heap_addr_stack.append(heap_addr)
		else:
			self.error("unreference variable!\n")
	
	def append_object(self,x,object_type=None):
		if object_type=='func':
			self.append_func_object(x)
		elif object_type='var':
			self.append_variable_object(x)
		else:
			self.append_normal_object(x,object_type)

	def declare_local_valuable(self,object_name):
		self.ar_heap.set_valuable(object_name,None)

	def get_object_addr(self,object_name):
		heap_addr = self.ar_heap.get_valuable_addr(object_name)
		if heap_addr==-1:
			self.error("unreference variable!\n")
		else:
			return heap_addr

	def check_local_variable(self,object_name):
		return self.ar_heap.current_ar.check_valuable_exist(object_name)

	def get_object(self,heap_addr):
		return self.object_heap.get_object(heap_addr)

	def set_object(self,object_name,new_heap_addr=None):
		if not new_heap_addr:
			# get addr from statck
			new_heap_addr = self.heap_addr_stack.pop()
		old_heap_addr = self.get_object_addr(object_name)
		# check if the previous addr is None or not
		if old_heap_addr:
			self.decrease_count(old_heap_addr)
		self.ar_heap.set_valuable(object_name,new_heap_addr)
		self.increase_count(new_heap_addr)




	def increase_func_count(self,heap_addr):
		func_object = self.get_object(heap_addr)
		func_object.count+=1
		static_arp = func_object.static_arp
		static_offset = func_object.static_offset
		self.increase_ar_global(static_arp,static_offset)


	def increase_normal_count(self,heap_addr):
		heap_object = self.object_heap.get_object(heap_addr)
		heap_object.count+=1

	def decrease_func_count(self,heap_addr):
		func_object = self.get_object(heap_addr)
		func_object.count-=1
		static_arp = func_object.static_arp
		static_offset = func_object.static_offset
		self.decrease_ar_global(static_arp,static_offset)
		if func_object.count==0
		self.object_heap.delete(heap_addr)
	
	def decrease_normal_count(self,heap_addr):
		heap_object = self.object_heap.get_object(heap_addr)
		heap_object.count-=1
		# if count is 0 ,delete it !
		if not heap_object.count:
			self.object_heap.delete(heap_addr)

	def increase_count(self,heap_addr):
		self.xcrease_count(heap_addr,'in')

	def decrease_count(self,heap_addr):
		self.xcrease_count(heap_addr,'de')

	def xcrease_count(self,heap_addr,x):
		if x=='in':
			xcrease_func_count = self.increase_func_count
			xcrease_normal_count = self.increase_normal_count
		else:
			xcrease_func_count = self.decrease_func_count
			xcrease_normal_count = self.decrease_normal_count

		heap_object = self.object_heap.get_object(heap_addr)
		if heap_object.object_type=='func':
			xcrease_func_count(heap_addr)
		else:
			xcrease_normal_count(heap_addr)

	def xcrease_ar_local(self,arp,offset,x):
		if x=='in':
			xcrease_count = self.increase_count
		else:
			xcrease_count = self.decrease_count
		# check  arp youself
		ar = self.ar_heap.get_object(arp)
		local_table_keys = ar.local_table.keys()
		for index in range(offset):
			heap_addr = local_table_keys[index]
			xcrease_count(heap_addr)

	def xcrease_ar_global(self,arp,offset,x):
		if x=='in':
			xcrease_ar_local = self.increase_ar_local
		else:
			xcrease_ar_local = self.decrease_ar_local
		arp = start_arp
		offset = start_offset
		while True:
			if arp==-1:
				return
			else:
				xcrease_ar_local(arp,offset)
				ar = self.ar_heap.get_object(arp)
				arp = ar.static_arp
				offset = ar.static_offset

	def increase_ar_local(self,arp,offset):
		self.xcrease_ar_local(arp,offset,'in')

	def increase_ar_global(self,start_arp,start_offset):
		self.xcrease_ar_global(start_arp,start_offset,'in')

	def decrease_ar_local(self,arp,offset):
		self.xcrease_ar_local(arp,offset,'de')

	def decrease_ar_global(self,start_arp,start_offset):
		self.xcrease_ar_global(start_arp,start_offset,'de')

	
	# now when should I delete ar ?
	# 
	def prepare_before_call(self,heap_addr):
		# create a environment and store previous environment
		# handle current ar first
		global eip
		self.ar_heap.current_ar.return_code_addr=eip
		if not self.ar_heap.check_addr(self.current_ar_addr):
			self.ar_heap.append(self.current_ar,self.current_ar_addr)

		# then handle new ar
		func_object = self.object_heap.get_object(heap_addr)
		new_static_arp = func_object.static_arp
		new_static_offset = func_object.static_offset

		# update current ar and its addr
		self.ar_heap.current_ar = ActivateRecord(new_static_arp,
			new_static_offset,
			self.ar_heap.current_ar_addr)
		self.current_ar_addr = self.ar_heap.get_new_addr()
		eip = func_object.object_value

	def prepare_after_call(self,argv=None):
		# handle argv
		pass

	def prepare_before_return(self):
		global eip
		
		# store current ar
		self.ar_heap.append(self.current_ar,self.current_ar_addr)
		# update environment
		self.ar_heap.current_ar_addr = self.ar_heap.current_ar.caller_arp 
		self.ar_heap.current_ar = self.ar_heap.get_object(self.ar_heap.current_ar_addr)

		eip = self.ar_heap.current_ar.return_code_addr

	def prepare_after_return(self):
		pass

	def error(self,msg):
		print msg
		exit(-1)

	def info(self,msg):
		print msg

	# tools for more convinence






