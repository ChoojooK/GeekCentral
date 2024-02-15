#include <iostream>
#include <map>

int main() {
    // Create a map of strings to integers
    std::map<std::string, int> ages = {{"Alice", 30}, {"Bob", 25}, {"Charlie", 35}};

    // Insert a new key-value pair
    ages["David"] = 40;

    // Remove a key-value pair
    ages.erase("Bob");

    // Access value by key
    std::cout << "Alice's age: " << ages["Alice"] << std::endl;

    // Iterate through the map
    for (const auto& pair : ages) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
