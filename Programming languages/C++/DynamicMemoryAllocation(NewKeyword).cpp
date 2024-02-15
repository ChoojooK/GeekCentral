#include <iostream>

int main() {
    // Allocate memory for a single integer
    int* ptr = new int;

    // Assign a value to the dynamically allocated integer
    *ptr = 42;

    // Print the value
    std::cout << "Dynamically allocated integer: " << *ptr << std::endl;

    // Deallocate memory
    delete ptr;

    return 0;
}
