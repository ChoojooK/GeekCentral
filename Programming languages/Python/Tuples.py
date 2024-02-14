# Tuples Python Script

# Define a tuple of colors
colors = ("red", "green", "blue", "yellow", "red")

# Print the tuple
print("Original Tuple:", colors)

# Accessing elements of a tuple
print("First Element:", colors[0])      # Output: red
print("Last Element:", colors[-1])       # Output: red

# Slicing a tuple
print("Sliced Tuple:", colors[1:4])      # Output: ('green', 'blue', 'yellow')

# Iterating over a tuple
print("Elements of Tuple:")
for color in colors:
    print(color)

# Checking if an element is in a tuple
print("Is 'blue' in the tuple?", "blue" in colors) # Output: True

# Length of a tuple
print("Length of Tuple:", len(colors))   # Output: 5

# Count occurrences of an element in a tuple
print("Count of 'red' in the tuple:", colors.count("red")) # Output: 2

# Index of an element in a tuple
print("Index of 'green' in the tuple:", colors.index("green")) # Output: 1

# Converting a tuple to a list
colors_list = list(colors)
print("Tuple converted to list:", colors_list)

# Converting a list to a tuple
numbers_list = [1, 2, 3, 4, 5]
numbers_tuple = tuple(numbers_list)
print("List converted to tuple:", numbers_tuple)
