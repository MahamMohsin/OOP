#Create a class programmer for storing info of few programmers working at microsoft

class programmer:
    company="Microsoft"
    
    def __init__(self,name,lang,salary):
        self.name=name
        self.lang=lang
        self.salary=salary
        
    def details(self):
        print("Company: ",self.company)
        print("Name: ",self.name)
        print("Language: ",self.lang)
        print("Salary: ",self.salary)
        
    
emp=programmer("Jonathan","Python",100000)
emp2=programmer("John","C++",50000)

print("PROGRAMMERS DETAILS: ")
emp.details()
print("\n")
emp2.details()
