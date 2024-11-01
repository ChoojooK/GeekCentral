/*
Member functions in C++ are functions that are defined within a class and operate on the data members of that class.
They can access and modify the class’s private and protected data.
*/

#include <iostream>

class Rectangle {
public:
    double width;
    double height;

    // Constructor
    Rectangle(double w, double h) {
        width = w;
        height = h;
    }

    // Member function to calculate area
    double calculateArea() {
        return width * height;
    }
};

int main() {
    // Create an object of the Rectangle class
    Rectangle rect(5.0, 3.0);

    // Call the member function to calculate the area
    double area = rect.calculateArea();
    std::cout << "Area of rectangle: " << area << std::endl;

    return 0;
}
