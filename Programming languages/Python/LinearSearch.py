def linear_search(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i
    return -1

# Example usage
arr = [64, 34, 25, 12, 22, 11, 90]
target = 22
index = linear_search(arr, target)
if index != -1:
    print(f"Target {target} found at index {index}")
else:
    print(f"Target {target} not found in the list")
