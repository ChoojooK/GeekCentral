#include <iostream>
#include <fstream>
#include <cmath>

void generate_words(int length) {
    std::ofstream file("output.txt");

    // Generate words of each length
    for (int i = 1; i <= length; ++i) {
        // Generate lowercase words of length i
        for (int j = 0; j < std::pow(26, i); ++j) {
            std::string word = "";
            for (int k = 0; k < i; ++k) {
                word += static_cast<char>(97 + (j / static_cast<int>(std::pow(26, k))) % 26);  // lowercase letters
            }
            file << word << "\n";
        }

        // Generate uppercase words of length i
        for (int j = 0; j < std::pow(26, i); ++j) {
            std::string word = "";
            for (int k = 0; k < i; ++k) {
                word += static_cast<char>(65 + (j / static_cast<int>(std::pow(26, k))) % 26);  // uppercase letters
            }
            file << word << "\n";
        }
    }

    file.close();
}

int main() {
    int length;
    std::cout << "Enter the desired length of words: ";
    std::cin >> length;
    generate_words(length);
    std::cout << "Words generated and saved to 'output.txt'." << std::endl;
    return 0;
}