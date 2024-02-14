# Classes Python Script

# Define a simple class representing a Person
class Person:
    # Constructor method to initialize the object with name and age
    def __init__(self, name, age):
        self.name = name
        self.age = age

    # Method to greet the person
    def greet(self):
        return "Hello, my name is " + self.name + " and I am " + str(self.age) + " years old."

# Create an instance of the Person class
person1 = Person("Emma", 25)

# Call the greet method of the person object
greeting_message = person1.greet()
print(greeting_message)

# Access attributes of the person object
print("Name:", person1.name)
print("Age:", person1.age)
