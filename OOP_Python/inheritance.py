#multiple inheritance is when a class inherets from more than one class
#(generally like 2 parents one child example)

#multi-level inheritance is when a class inherits from another class and that class inherits from another class
#(ex: grandparent,parent,child)
#we access all the methods and attributes of the parent classes from the chldmost class object

#we use super to access the methods of the parent classes
class Employee:
    def __init__(self):
        print("Employee created")
    a = 1 

class Programmer(Employee):
    def __init__(self):
        super().__init__()
        print("Programmer created")
    b = 2 

class Manager(Programmer):
    def __init__(self):
        super().__init__()#apne parent ka constructor chala dega
        print("Manager created")
    c = 3

o = Employee()
print(o.a) # Prints the a attribute
# print(o.b) # Shows an error as there is no b attribute in Employee class

o = Programmer()
print(o.a, o.b)


o = Manager()
print(o.a, o.b, o.c)