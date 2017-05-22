#!/usr/bin/env python




class Heap():
	def __init__(self,max_size=1000):
		self.objects = {}
		self.free_addr_pool = []
		self.free_addr_num = 0
		self.fill_addr_pool(max_size)
		# mark the max addr in addr pool
		self.max_addr =max_size -1

	def fill_addr_pool(self,size):
		for addr in range(size):
			self.free_addr_pool.append(addr)
		self.free_addr_num = size
	def get_size(self):
		return len(self.objects.keys())

	def get_new_addr(self):
		if not self.free_addr_num:
			self.error("free addr is empty!\n")
		new_addr = self.free_addr_pool[0]
		del self.free_addr_pool[0]
		self.free_addr_num-=1
		return new_addr		

	def append(self,heap_object,new_addr=None):
		if new_addr==None:
			new_addr = self.get_new_addr()
		elif not self.check_addr_available(new_addr):
			self.error("new addr is not available!\n")
		self.objects[new_addr] = heap_object
		return new_addr

	def delete(self,addr):
		if not self.check_addr_exist(addr):
			self.info("addr is already free\n")
			return
		else:
			del self.objects[addr]
			self.free_addr_pool.append(addr)
			self.free_addr_num+=1

	def get_object(self,addr):
		if not self.check_addr_exist(addr):
			# self.error("addr is not available\n")
			return None
		return self.objects[addr]

	def clean_all(self):
		for addr in self.objects.keys():
			del self.objects[addr]
			self.free_addr_pool.append(addr)
			self.free_addr_num+=1

	# def check_addr(self,addr):
	# 	if addr not in self.objects.keys() or addr > self.max_addr:
	# 		return False
	# 	return True

	def error(self,msg):
		print msg
		# exit(-1)
		raise Exception(msg)

	def info(self,msg):
		print msg

	def printf(self,addr):
		heap_object = self.get_object(addr)
		print heap_object

	def check_addr_available(self,addr):
		if self.objects.has_key(addr) or addr >self.max_addr:
			return False
		return True

	# def check_addr_need_save(self,addr):
	# 	if check_addr_available(addr) and
	def check_addr_exist(self,addr):
		if self.objects.has_key(addr):
			return True
		return False

if __name__=='__main__':
	heap = Heap(2)
	heap.append("name")
	heap.append("breakpoint")
	heap.append("asfa")
	heap.printf(0)

