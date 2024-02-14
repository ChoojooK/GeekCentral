def binary_search(arr, target):
    left = 0
    right = len(arr) - 1

    while left <= right:
        mid = (left + right) // 2

        # Check if the target is equal to the middle element
        if arr[mid] == target:
            return mid
        # If the target is greater, search the right half
        elif arr[mid] < target:
            left = mid + 1
        # If the target is smaller, search the left half
        else:
            right = mid - 1

    # If the target is not found
    return -1

# Example usage
arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
target = 5
index = binary_search(arr, target)
if index != -1:
    print(f"Target {target} found at index {index}")
else:
    print(f"Target {target} not found in the list")
