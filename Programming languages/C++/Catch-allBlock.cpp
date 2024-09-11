// a catch-all block is used in exception handling to catch any exceptions that aren't specifically handled by other catch blocks. It’s part of the try-catch mechanism for handling runtime errors.

#include <iostream>
#include <stdexcept>

int main() {
    try {
        int denominator = 0;
        if (denominator == 0) {
            throw std::runtime_error("Division by zero error!");
        }
        int result = 10 / denominator;
        std::cout << "Result: " << result << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Exception occurred: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown exception occurred." << std::endl;
    }

    return 0;
}
