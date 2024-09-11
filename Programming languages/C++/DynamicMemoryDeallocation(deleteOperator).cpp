/*
In C++, dynamic memory deallocation is done using the delete and delete[] operators.
These operators free up memory that was previously allocated using new and new[], respectively.
Properly managing memory is crucial to avoid memory leaks and other issues.
*/

#include <iostream>

int main() {
    // Allocate memory for an array of integers
    int* arr = new int[10];

    // Assign values to the dynamically allocated array
    for (int i = 0; i < 10; ++i) {
        arr[i] = i;
    }

    // Deallocate memory
    delete[] arr;

    return 0;
}
