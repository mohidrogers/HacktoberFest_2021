import heapq
class MaxHeap:
    def __init__(self, data=None):
        if data is None:
            self.data = []
        else:
            self.data = [-i for i in data]
            heapq.heapify(self.data)
 
    def top(self):
        return -self.data[0]
 
    def push(self, item):
        heapq.heappush(self.data, -item)
 
    def pop(self):
        return -heapq.heappop(self.data)
 
    def replace(self, item):
        return heapq.heapreplace(self.data, -item)
def findsmall(l, k):
    if not l or len(l) < k:
        exit(-1)
    pq = MaxHeap(l[0:k])
    for i in range(k, len(l)):
        if l[i] < pq.top():
            pq.replace(l[i])
    return pq.top()
 
l = [7, 4, 6, 3, 9, 1]
k = 4
print(findsmall(l, k))
 

