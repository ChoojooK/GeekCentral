# Inheritance Python Script

# Define a base class called Animal
class Animal:
    def __init__(self, species):
        self.species = species

    def sound(self):
        return "Unknown sound"

# Define a derived class called Dog, inheriting from Animal
class Dog(Animal):
    def __init__(self, name):
        # Call the constructor of the base class
        super().__init__("Dog")
        self.name = name

    def sound(self):
        return "Woof!"

# Define another derived class called Cat, inheriting from Animal
class Cat(Animal):
    def __init__(self, name):
        # Call the constructor of the base class
        super().__init__("Cat")
        self.name = name

    def sound(self):
        return "Meow!"

# Create instances of the Dog and Cat classes
dog = Dog("Buddy")
cat = Cat("Whiskers")

# Call the sound method of each object
print("Dog:", dog.sound())  # Output: Woof!
print("Cat:", cat.sound())  # Output: Meow!
