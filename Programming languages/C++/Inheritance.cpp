#include <iostream>

// Base class
class Shape {
public:
    double width;
    double height;

    void setDimensions(double w, double h) {
        width = w;
        height = h;
    }

    virtual double area() {
        return width * height;
    }
};

// Derived class
class Rectangle : public Shape {
public:
    double area() override {
        return width * height;
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(5.0, 3.0);
    std::cout << "Area of rectangle: " << rect.area() << std::endl;
    return 0;
}