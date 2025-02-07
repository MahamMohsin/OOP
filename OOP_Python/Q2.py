#make a calculator class capable of calculating square,cube and square root of a number
#num**1/2 is square root
import math

class calculator:
    def __init__(self,num):
        self.num=num
    
    def square(self):
        print(f"Square of {self.num} = {self.num*self.num} ")
    
    def cube(self):
        print(f"Cube of {self.num} = {self.num*self.num*self.num}")
     
    def sqroot(self):
        print(f"Sqaure root of {self.num} = {math.sqrt(self.num):.2f}")
        
    def display(self):
        print(f"Number is:",self.num)
        self.square()
        self.cube()
        self.sqroot()

n=int(input("Enter a number: "))
cal=calculator(n)
cal.display()