#include <iostream>

// Base class
class Animal {
public:
    virtual void makeSound() {
        std::cout << "Animal makes a sound." << std::endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Dog barks." << std::endl;
    }
};

int main() {
    Animal* animalPtr;

    // Create a Dog object and assign its address to animalPtr
    animalPtr = new Dog();

    // Call the makeSound function
    animalPtr->makeSound();  // Outputs "Dog barks."

    delete animalPtr;  // Clean up dynamically allocated memory

    return 0;
}
