#include <iostream>

// Define a class named 'Person'
class Person {
public:
    // Member variables
    std::string name;
    int age;
    
    // Constructor
    Person(std::string n, int a) : name(n), age(a) {}
    
    // Member function to display information
    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Create objects of the 'Person' class
    Person person1("Alice", 25);
    Person person2("Bob", 30);
    
    // Call member functions
    person1.display();
    person2.display();
    
    return 0;
}
