class Employee:
    a = 1
    
    @classmethod
    def show(cls):
        print(f"The class attribute of a is {cls.a}")

    @property 
    def name(self):
        return f"{self.fname} {self.lname}"
    
    @name.setter
    def name (self,value):
        self.fname = value.split(" ")[0] #jahan space wahan split[Maham,Mohsin] and indexing as 0 and 1
        self.lname = value.split(" ")[1]

e = Employee()
e.a = 45

e.name = "Maham Mohsin"
print(e.fname, e.lname)
print(e.fname)
print(e.lname)
e.show()

"""""The @property decorator in Python is used to define getter, setter, and deleter methods 
for a class attribute while allowing access to it as if it were a regular attribute. 
It is part of Python's built-in property() function and provides encapsulation, validation, 
and computed properties without requiring explicit method calls.
class Circle:
    def __init__(self, radius):
        self._radius = radius  # Private attribute

    @property
    def radius(self):
        Getter method for radius
        return self._radius

    @radius.setter
    def radius(self, value):
        Setter method with validation
        if value < 0:
            raise ValueError("Radius cannot be negative")
        self._radius = value

    @property
    def area(self):
       Computed property (read-only)
        return 3.14159 * self._radius ** 2

# Usage
c = Circle(5)
print(c.radius)   # Calls the getter
c.radius = 10     # Calls the setter
print(c.area)     # Computed property (can't be set)

# c.area = 20  # This will raise an AttributeError (read-only)
"""

