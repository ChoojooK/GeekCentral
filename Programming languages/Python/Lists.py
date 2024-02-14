# Lists Python Script

# Define a list of numbers
numbers = [1, 2, 3, 4, 5]

# Print the list
print("Original List:", numbers)

# Accessing elements of a list
print("First Element:", numbers[0])      # Output: 1
print("Last Element:", numbers[-1])       # Output: 5

# Slicing a list
print("Sliced List:", numbers[2:4])      # Output: [3, 4]

# Modifying elements of a list
numbers[1] = 10
print("Modified List:", numbers)         # Output: [1, 10, 3, 4, 5]

# Adding elements to a list
numbers.append(6)
print("List after Append:", numbers)     # Output: [1, 10, 3, 4, 5, 6]

# Removing elements from a list
numbers.remove(3)
print("List after Remove:", numbers)     # Output: [1, 10, 4, 5, 6]

# Iterating over a list
print("Elements of List:")
for num in numbers:
    print(num)

# Checking if an element is in a list
print("Is 4 in the list?", 4 in numbers) # Output: True

# Length of a list
print("Length of List:", len(numbers))   # Output: 5

# Sorting a list
numbers.sort()
print("Sorted List:", numbers)           # Output: [1, 4, 5, 6, 10]
