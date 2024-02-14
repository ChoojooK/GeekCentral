# Polymorphism Python Script

# Define a base class called Shape
class Shape:
    def area(self):
        pass

# Define a derived class called Circle, inheriting from Shape
class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return 3.14 * self.radius ** 2

# Define another derived class called Rectangle, inheriting from Shape
class Rectangle(Shape):
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def area(self):
        return self.width * self.height

# Define a function to calculate the total area of shapes
def calculate_total_area(shapes):
    total_area = 0
    for shape in shapes:
        total_area += shape.area()
    return total_area

# Create instances of Circle and Rectangle
circle = Circle(5)
rectangle = Rectangle(4, 6)

# Calculate and print the area of each shape
print("Area of the Circle:", circle.area())       # Output: 78.5
print("Area of the Rectangle:", rectangle.area()) # Output: 24

# Calculate and print the total area of shapes using polymorphism
shapes = [circle, rectangle]
total_area = calculate_total_area(shapes)
print("Total Area of Shapes:", total_area)       # Output: 102.5
