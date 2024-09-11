/*
In C++, a struct (short for "structure") is a user-defined data type that groups related variables of different types into a single unit.
Unlike classes, struct members are public by default, but they function similarly to classes otherwise.
*/

#include <iostream>

// Define a struct named 'Point'
struct Point {
    int x;
    int y;
};

int main() {
    // Create an object of the 'Point' struct
    Point p1 = {5, 10};
    
    // Access struct members
    std::cout << "Coordinates: (" << p1.x << ", " << p1.y << ")" << std::endl;
    
    return 0;
}
