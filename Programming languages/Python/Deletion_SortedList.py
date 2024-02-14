def sorted_delete(arr, value):
    if value in arr:
        arr.remove(value)
        print(f"{value} deleted from the list.")
    else:
        print(f"{value} not found in the list.")

# Example usage
sorted_list = [1, 3, 5, 7, 9]
value_to_delete = 5
sorted_delete(sorted_list, value_to_delete)
print("Sorted List after deletion:", sorted_list)
