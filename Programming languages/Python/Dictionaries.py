# Dictionaries Python Script

# Define a dictionary of student grades
grades = {
    "Alice": 85,
    "Bob": 90,
    "Charlie": 75,
    "David": 80,
    "Emma": 95
}

# Print the dictionary
print("Original Dictionary:", grades)

# Accessing elements of a dictionary
print("Grade of Alice:", grades["Alice"])       # Output: 85

# Modifying elements of a dictionary
grades["David"] = 82
print("Modified Dictionary:", grades)          # Output: {'Alice': 85, 'Bob': 90, 'Charlie': 75, 'David': 82, 'Emma': 95}

# Adding elements to a dictionary
grades["Frank"] = 88
print("Dictionary after Addition:", grades)    # Output: {'Alice': 85, 'Bob': 90, 'Charlie': 75, 'David': 82, 'Emma': 95, 'Frank': 88}

# Removing elements from a dictionary
del grades["Charlie"]
print("Dictionary after Deletion:", grades)    # Output: {'Alice': 85, 'Bob': 90, 'David': 82, 'Emma': 95, 'Frank': 88}

# Iterating over a dictionary
print("Elements of Dictionary:")
for name, grade in grades.items():
    print(name, ":", grade)

# Checking if a key is in a dictionary
print("Is 'Bob' in the dictionary?", "Bob" in grades) # Output: True

# Length of a dictionary
print("Length of Dictionary:", len(grades))    # Output: 5

# Getting keys and values separately
print("Keys of Dictionary:", grades.keys())
print("Values of Dictionary:", grades.values())

# Clearing a dictionary
grades.clear()
print("Dictionary after Clearing:", grades)     # Output: {}
