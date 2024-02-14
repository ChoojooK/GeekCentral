# Hash Table Python Script

class HashTable:
    def __init__(self, size):
        self.size = size
        self.table = [[] for _ in range(size)]

    def _hash_function(self, key):
        return hash(key) % self.size

    def insert(self, key, value):
        index = self._hash_function(key)
        for pair in self.table[index]:
            if pair[0] == key:
                pair[1] = value
                return
        self.table[index].append([key, value])

    def get(self, key):
        index = self._hash_function(key)
        for pair in self.table[index]:
            if pair[0] == key:
                return pair[1]
        return None

    def remove(self, key):
        index = self._hash_function(key)
        for i, pair in enumerate(self.table[index]):
            if pair[0] == key:
                del self.table[index][i]
                return

# Create a hash table instance
hash_table = HashTable(10)

# Insert key-value pairs into the hash table
hash_table.insert("apple", 5)
hash_table.insert("banana", 7)
hash_table.insert("orange", 3)

# Get values for keys from the hash table
print("Value for 'apple':", hash_table.get("apple"))    # Output: 5
print("Value for 'banana':", hash_table.get("banana"))  # Output: 7
print("Value for 'orange':", hash_table.get("orange"))  # Output: 3

# Remove a key-value pair from the hash table
hash_table.remove("banana")

# Get value for a key that has been removed
print("Value for 'banana':", hash_table.get("banana"))  # Output: None
