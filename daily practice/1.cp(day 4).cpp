# Define the person structure
class Person:
    def __init__(self, name, age, height):
        self.name = name
        self.age = age
        self.height = height

# Create a person instance
person = Person("John", 25, 1.75)

# Print their information to the console
print(f"Name: {person.name}")
print(f"Age: {person.age}")
print(f"Height: {person.height}")

