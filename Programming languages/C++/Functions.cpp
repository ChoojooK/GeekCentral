/*
In C++, functions are blocks of code designed to perform a specific task.
They help you organize and reuse code, making your programs more modular and easier to understand.
*/

#include <iostream>

// Function declaration
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 5);  // Function call
    std::cout << "Result: " << result << std::endl;
    
    return 0;
}
