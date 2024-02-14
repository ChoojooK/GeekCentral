#include <iostream>

#define MAX_VALUE 100
#define PI 3.14159

int main() {
    std::cout << "Max value: " << MAX_VALUE << std::endl;
    std::cout << "PI: " << PI << std::endl;

    // Attempting to modify a defined constant will not result in a compilation error
    // MAX_VALUE = 200; // No compilation error, but does not modify the value of MAX_VALUE

    return 0;
}
