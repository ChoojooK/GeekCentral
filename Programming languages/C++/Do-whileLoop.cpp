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
