# Queue Python Script

class Queue:
    def __init__(self):
        self.items = []

    def is_empty(self):
        return len(self.items) == 0

    def enqueue(self, item):
        self.items.append(item)

    def dequeue(self):
        if not self.is_empty():
            return self.items.pop(0)
        else:
            return "Queue is empty"

    def peek(self):
        if not self.is_empty():
            return self.items[0]
        else:
            return "Queue is empty"

    def size(self):
        return len(self.items)

# Create a queue instance
queue = Queue()

# Enqueue elements into the queue
queue.enqueue(5)
queue.enqueue(10)
queue.enqueue(15)

# Peek at the front element of the queue
print("Front element of the queue:", queue.peek())

# Dequeue elements from the queue
print("Dequeued element:", queue.dequeue())
print("Dequeued element:", queue.dequeue())

# Check if the queue is empty
print("Is the queue empty?", queue.is_empty())

# Get the size of the queue
print("Size of the queue:", queue.size())
