#Create a class employee and add salary and increment properties to it

class employee:
    def __init__(self,salary,inc):
        self.salary=salary
        self.inc=inc
    
    @property
    def salaryafterinc(self):
        return (self.salary*self.inc)+self.salary
    
    @salaryafterinc.setter#change value of salary based on increment
    def salaryafterinc(self,s):
       self.salary=(self.salary*self.inc)+self.salary      
       
       
e=employee(10000,0.1)
print("Salary post increment: ")
print(e.salaryafterinc)