def sorted_insert(arr, value):
    index = 0
    while index < len(arr) and arr[index] < value:
        index += 1
    arr.insert(index, value)

# Example usage
sorted_list = [1, 3, 5, 7, 9]
value_to_insert = 6
sorted_insert(sorted_list, value_to_insert)
print("Sorted List after insertion:", sorted_list)
