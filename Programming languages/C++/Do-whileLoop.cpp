/*
A do-while loop is a type of loop that executes a block of code at least once and then repeatedly executes the block as long as a specified condition is true.
It guarantees that the loop body is executed at least once because the condition is checked after the loop body.
*/

#include <iostream>

int main() {
    int num = 0;

    // Prompt the user to enter a positive number
    do {
        std::cout << "Enter a positive number: ";
        std::cin >> num;
    } while (num <= 0);

    std::cout << "You entered: " << num << std::endl;
    
    return 0;
}
