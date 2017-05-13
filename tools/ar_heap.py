from heap import Heap
import collections



class ActivateRecord(object):
	def __init__(self,static_arp,static_offset=None,caller_arp=None):
		
		self.local_table = collections.OrderedDict()
		
		# keep up with the size of local table
		self.dynamic_offset = 0
		#the addr that eip  jumps next time
		self.return_code_addr = None

		# can not be changed
		# static_arp is equal to that of called function
		# static_offset is for addressing
		self.static_arp = static_arp
		self.static_offset=static_offset
		
		self.caller_arp = caller_arp

	def set_valuable(self,name,heap_addr=None):
		self.local_table[name] = heap_addr
		self.dynamic_offset +=1

	def check_valuable_exist(self,name,offset=None):
		if not offset:
			offset = self.dynamic_offset
		local_table_keys = self.local_table.keys()
		for index in range(offset):
			key = local_table_keys[index]
			if self.local_table[key]==name:
				return True
		return False

	def get_valuable_addr(self,name):
		return self.local_table[name]

class ARHeap(Heap):
	def __init__(self,max_size=100):
		Heap.__init__(self,max_size)
		self.current_ar = ActivateRecord(-1)
		#current_ar_addr is where current_ar will store
		self.current_ar_addr = self.get_new_addr()

	def get_valuable_addr(self,object_name):
		temp_ar = self.current_ar
		static_offset=None
		while True:
		if temp_ar.check_valuable_exist(object_name,static_offset):
			return temp_ar.get_valuable_addr(object_name)
		else:
			static_arp = temp_ar.static_arp
			static_offset = temp_ar.static_offset
			if static_arp == -1:
				# it means error
				return -1
			temp_ar = self.get_object(static_arp)

	def get_dynamic_offset(self):
		return self.current_ar.dynamic_offset

	def get_static_offset(self):
		return self.current_ar.static_offset