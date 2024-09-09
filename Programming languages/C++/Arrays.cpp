// An array is a collection of items (elements) of the same type stored at contiguous memory locations.
// For instance, if you want to store several integers or several floats, an array lets you do this efficiently.


// Declaration

// Syntax for declaring an array:
// data_type array_name[array_size];

// Example:
int numbers[5];  // Declares an array of 5 integers

// Initializing the array:
int numbers[5] = {1, 2, 3, 4, 5};  // Initializes an array with values

//Accessing Elements

// Individual elements of an array are accessed using index notation:
// array_name[index];

// Example:
int value = numbers[2];  // Accesses the third element of the numbers array

//Iterating Through an Array

// You can use a loop to iterate through the elements of an array:
for (int i = 0; i < array_size; i++) {
    // Access and process each element of the array
    std::cout << numbers[i] << std::endl;
}

//Arrays and Functions

// Arrays can be passed to functions just like other variables:
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Example:
int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    printArray(numbers, 5);  // Passes the numbers array to the printArray function
    return 0;
}

//Multidimensional Arrays

// Multidimensional arrays are arrays of arrays:
// data_type array_name[row_size][column_size];

// Example:
int matrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

//Dynamic Arrays

// You can create arrays with dynamic size using dynamic memory allocation:
int* dynamicArray = new int[size];

// Don't forget to delete dynamic arrays to avoid memory leaks:
delete[] dynamicArray;
