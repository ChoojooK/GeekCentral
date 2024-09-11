// the std::vector is a powerful and flexible container from the Standard Template Library (STL) that dynamically manages a collection of elements.
// It provides several features that make it a popular choice for many use cases.

#include <iostream>
#include <vector>

int main() {
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Insert an element at the end
    numbers.push_back(6);

    // Remove the last element
    numbers.pop_back();

    // Access elements using index
    std::cout << "First element: " << numbers[0] << std::endl;

    // Iterate through the vector
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
