#include <iostream>

int main() {
    int choice;
    std::cout << "Enter a number (1-3): ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "You entered one." << std::endl;
            break;
        case 2:
            std::cout << "You entered two." << std::endl;
            break;
        case 3:
            std::cout << "You entered three." << std::endl;
            break;
        default:
            std::cout << "Invalid choice." << std::endl;
            break;
    }

    return 0;
}
