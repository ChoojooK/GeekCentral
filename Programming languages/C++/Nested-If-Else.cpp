/*
Nested if-else statements in C++ are used when you need to evaluate multiple conditions in a hierarchy.
Essentially, you place one if-else statement inside another, allowing for more complex decision-making.
*/

#include <iostream>

int main() {
    int num = 10;

    // Check if num is positive, negative, or zero
    if (num > 0) {
        std::cout << "The number is positive." << std::endl;
    } else if (num < 0) {
        std::cout << "The number is negative." << std::endl;
    } else {
        std::cout << "The number is zero." << std::endl;
    }

    return 0;
}
