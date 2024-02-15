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
