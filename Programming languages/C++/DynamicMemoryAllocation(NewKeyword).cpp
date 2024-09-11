/*
In C++, dynamic memory allocation allows you to allocate and manage memory at runtime, rather than at compile time.
This is useful for creating data structures whose size is not known until the program is running.
The new keyword is used to allocate memory dynamically.
*/

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
