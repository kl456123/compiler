
from heap import Heap



class HeapObject(object):
	def __init__(self,object_value,currect_ar_addr,object_type=None):
		self.count = 0
		self.static_arp = currect_ar_addr
		self.object_type = object_type
		self.object_value = object_value
		self.clear = None

class HeapnormalObject(HeapObject):
	def __init__(self,object_value,currect_ar_addr,object_type=None):
		HeapObject.__init__(self,object_value,currect_ar_addr,object_type)
		
class HeapFuncObject(HeapObject):
	def __init__(self,func_code_addr,currect_ar_addr,static_offset,argv=None):
		HeapObject.__init__(self,func_code_addr,currect_ar_addr,'func')
		self.static_offset = static_offset
		# self.argv = self.handle_argv(argv)

	# def handle_argv(self,argv):
	# 	if argv==None:
	# 		return []
	# 	else:
	# 		return argv

class ObjectHeap(Heap):
	def __init__(self,max_size=100):
		Heap.__init__(self,max_size=max_size)

		self.assessble_addr = []
	def append_normal_object(self,object_value,currect_ar_addr,object_type=None):
		normal_object = HeapnormalObject(object_value,currect_ar_addr,object_type)
		return self.append(normal_object)

	def append_func_object(self,func_code_addr,currect_ar_addr,static_offset):
		func_object = HeapFuncObject(func_code_addr,currect_ar_addr,static_offset)
		return self.append(func_object)



	def mark_available(self,heap_addr):
		heap_object = self.get_object(heap_addr)
		heap_object.clear = 0
		self.assessble_addr.append(heap_addr)

	def reduce(self):
		all_addr = self.objects.keys()
		for heap_addr in all_addr:
			if heap_addr not in self.assessble_addr:
				self.delete(heap_addr)
		self.assessble_addr=[]

if __name__=='__main__':
	object_heap = ObjectHeap(2)
