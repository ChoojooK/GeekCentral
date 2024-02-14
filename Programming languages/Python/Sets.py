# Sets Python Script

# Define a set of colors
colors = {"red", "green", "blue", "yellow", "red"}

# Print the set
print("Original Set:", colors)

# Accessing elements of a set (Note: Sets are unordered, so indexing is not supported)
# print("First Element:", colors[0])  # This will raise an error

# Adding elements to a set
colors.add("orange")
print("Set after Addition:", colors)

# Removing elements from a set
colors.remove("green")
print("Set after Removal:", colors)

# Iterating over a set
print("Elements of Set:")
for color in colors:
    print(color)

# Checking if an element is in a set
print("Is 'blue' in the set?", "blue" in colors)

# Length of a set
print("Length of Set:", len(colors))

# Union of sets
more_colors = {"purple", "pink", "yellow"}
all_colors = colors.union(more_colors)
print("Union of Sets:", all_colors)

# Intersection of sets
common_colors = colors.intersection(more_colors)
print("Intersection of Sets:", common_colors)

# Difference of sets
different_colors = colors.difference(more_colors)
print("Difference of Sets:", different_colors)

# Clearing a set
colors.clear()
print("Set after Clearing:", colors)
