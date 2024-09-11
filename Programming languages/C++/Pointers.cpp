/*
Pointers in C++ are variables that store memory addresses.
They are powerful tools for dynamic memory management, accessing hardware, and implementing various data structures.
*/


//Declaration

// Syntax for declaring a pointer:
// data_type* pointer_name;

// Example:
int* ptr;  // Declares a pointer to an integer

//Initialization

// Pointers can be initialized to point to specific memory addresses or to other variables:
int num = 5;
int* ptr = &num;  // Initializes ptr to point to the memory address of num

//Dereferencing

// Dereferencing a pointer means accessing the value stored at the memory address it points to:
int value = *ptr;  // Retrieves the value stored at the memory address pointed to by ptr

//Dynamic Memory Allocation

// You can allocate memory dynamically using the new keyword:
int* dynamicPtr = new int;  // Allocates memory for an integer

// Don't forget to deallocate dynamically allocated memory to avoid memory leaks:
delete dynamicPtr;

//Pointer Arithmetic

// Pointers support arithmetic operations:
int* ptr = /* some memory address */;
ptr++;  // Moves ptr to the next memory address of the same data type

//Arrays and Pointers

// Arrays and pointers are closely related:
int numbers[5] = {1, 2, 3, 4, 5};
int* ptr = numbers;  // Assigns the address of the first element of the array to ptr

// Accessing array elements using pointers:
int thirdElement = *(ptr + 2);  // Accesses the third element of the array using pointer arithmetic

//Pointers and Functions

// Pointers can be passed to functions:
void modifyValue(int* ptr) {
    *ptr = 10;  // Modifies the value stored at the memory address pointed to by ptr
}

// Example:
int main() {
    int num = 5;
    modifyValue(&num);  // Passes the address of num to the modifyValue function
    return 0;
}
