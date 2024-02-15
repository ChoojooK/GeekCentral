#include <iostream>

class Rectangle {
public:
    // Member variables
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
    // Create objects of the Rectangle class
    Rectangle rect1(5.0, 3.0);
    Rectangle rect2(4.0, 6.0);

    // Calculate and display the area of the rectangles
    std::cout << "Area of rect1: " << rect1.calculateArea() << std::endl;
    std::cout << "Area of rect2: " << rect2.calculateArea() << std::endl;

    return 0;
}
