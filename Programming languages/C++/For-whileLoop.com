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
