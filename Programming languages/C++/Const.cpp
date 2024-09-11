// const is a keyword used to define constants and make variables or object members immutable, meaning their values cannot be changed after they are initialized.
// It helps ensure that certain data remains read-only and can prevent accidental modifications.

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
