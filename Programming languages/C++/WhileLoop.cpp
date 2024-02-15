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
