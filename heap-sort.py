def maxHeapify(arr, n, i):
	largest = i
	l = 2*i + 1
	r = 2*i + 2
	if l<n and arr[l] > arr[i]:
		largest = l
	if r<n and arr[r] > arr[largest]:
		largest = r

	if largest != i:
		arr[i], arr[largest] = arr[largest], arr[i]
		maxHeapify(arr, n, largest)


def minHeapify(arr, n, i):
	smallest = i
	l = 2*i + 1
	r = 2*i + 2
	if l<n and arr[l] < arr[i]:
		smallest = l
	if r<n and arr[r] < arr[smallest]:
		smallest = r

	if smallest != i:
		arr[i], arr[smallest] = arr[smallest], arr[i]
		minHeapify(arr, n, smallest)


def buildMaxHeap(arr):
	print arr
	lenn = len(arr)
	for i in xrange(lenn/2, -1, -1):
		maxHeapify(arr, lenn, i)	
	return arr

def buildMinHeap(arr):
	print arr
	lenn = len(arr)
	for i in xrange(lenn/2, -1, -1):
		minHeapify(arr, lenn, i)	
	return arr

#print buildMaxHeap([4, 1, 3, 2, 16, 9, 10, 14, 8, 7])
#print buildMinHeap([4, 1, 3, 2, 16, 9, 10, 14, 8, 7])

def ascHeapSort():
	arr = [4, 1, 3, 2, 16, 9, 10, 14, 8, 7]
	print 'unsorted', arr
	arr = buildMaxHeap(arr)
	print 'heapify', arr
	lena = len(arr)

	for i in xrange(lena-1, 0, -1):
		print i, lena-1-i, arr[0], arr[i]
		print 'b arr', arr
		arr[0], arr[i] = arr[i], arr[0]
		print '\na arr', arr
		maxHeapify(arr, i, 0)

	print 'sorted', arr

def dscHeapSort():
	arr = [4, 1, 3, 2, 16, 9, 10, 14, 8, 7]
	print 'unsorted', arr
	arr = buildMinHeap(arr)
	print 'heapify', arr
	lena = len(arr)

	for i in xrange(lena-1, 0, -1):
		print i, lena-1-i, arr[0], arr[i]
		print 'b arr', arr
		arr[0], arr[i] = arr[i], arr[0]
		print '\na arr', arr
		minHeapify(arr, i, 0)

	print 'sorted', arr

ascHeapSort()
dscHeapSort()













