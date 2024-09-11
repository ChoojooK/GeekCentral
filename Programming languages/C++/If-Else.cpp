/*
In C++, if-else statements are used to execute code based on conditions.
They allow you to branch your program’s flow depending on whether a condition is true or false.
*/

#include <iostream>

int main() {
    int num = 10;

    // Check if num is greater than 0
    if (num > 0) {
        std::cout << "The number is positive." << std::endl;
    } else {
        std::cout << "The number is non-positive." << std::endl;
    }

    return 0;
}
