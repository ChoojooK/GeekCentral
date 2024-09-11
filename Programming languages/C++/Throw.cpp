/*
In C++, the throw keyword is used to signal the occurrence of an exception, which is an error or unexpected situation that occurs during program execution.
When an exception is thrown, it disrupts the normal flow of control and transfers it to a specific part of the program designed to handle such situations.
*/

#include <iostream>
#include <stdexcept>

int main() {
    try {
        int numerator = 10;
        int denominator = 0;

        if (denominator == 0) {
            throw std::runtime_error("Division by zero error!");
        }

        int result = numerator / denominator;
        std::cout << "Result: " << result << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Exception occurred: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown exception occurred." << std::endl;
    }

    return 0;
}
