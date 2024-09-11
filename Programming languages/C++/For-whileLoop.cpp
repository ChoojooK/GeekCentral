// The for loop is often used when you know in advance how many times you want to repeat a block of code.
//It includes initialization, condition, and iteration expressions all in one line.

#include <iostream>

int main() {
    int count = 0;

    // Using a for loop to initialize, check condition, and increment count
    for (; count < 5; count++) {
        std::cout << "Count: " << count << std::endl;
    }

    std::cout << "Loop finished." << std::endl;
    
    return 0;
}
