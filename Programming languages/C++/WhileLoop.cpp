/*
The while loop in C++ is a control flow statement that repeatedly executes a block of code as long as a specified condition remains true.
It is useful for scenarios where you don’t know beforehand how many times you need to iterate.
*/

#include <iostream>

int main() {
    int count = 0;

    // Loop until count is less than 5
    while (count < 5) {
        std::cout << "Count: " << count << std::endl;
        count++;  // Increment count
    }

    std::cout << "Loop finished." << std::endl;
    
    return 0;
}
