#include <iostream>

int main() {
    const int MAX_VALUE = 100;
    const double PI = 3.14159;

    std::cout << "Max value: " << MAX_VALUE << std::endl;
    std::cout << "PI: " << PI << std::endl;

    // Attempting to modify a const variable will result in a compilation error
    // MAX_VALUE = 200; // Error: assignment of read-only variable 'MAX_VALUE'

    return 0;
}
