#oop focuses on solving problems using objects and usually involves reusablity of codes
#class is blueprint to create objects

class employee:
    # name="Maham Mohsin" this is class attribute
    lang="Python"
    salary=250000

#making obj in c++
#employee emp1;
   
#making object in python
emp1=employee()
emp1.name="Maham Mohsin"#instance/object attribute instance attributes are given preference over class att.(but class att doesnt change originally)
print(f"Details of employee: {emp1.name}")
print(emp1.lang,emp1.salary)

#for taking user input for class attributes

class student:
    name=""
    rollno=""
    section=""
    
    def func(self):#self is neccessary to be given reason mentioned in call
        print("This is a function")
    
    @staticmethod#static method is used when we dont want to use self such as normal print
    def print():
        print("This is a static method")

std1=student()
std2=student()
for i in range(0,2):
    if i==0:
        std1.name=input("Enter student name: ")
        std1.rollno=input("Enter student's Rollnum: ")
        std1.section=input("Enter section: ")
    else:
        std2.name=input("Enter student name: ")
        std2.rollno=input("Enter student's Rollnum: ")
        std2.section=input("Enter section: ")
        

print("STUDENT DETAILS:")
print(std1.name,std1.rollno,std1.section)
print(std2.name,std2.rollno,std2.section)

std1.func()
#same as student.func(std1) hence self given
std1.print()
