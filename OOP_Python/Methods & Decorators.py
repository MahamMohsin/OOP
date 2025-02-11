#directly accessing class attributes

class employee:
    name="Maham"
    
    @classmethod   #also better to use cls keyword instead of self 
    def show(cls):
        print("Class attribute: ",cls.name)
    
    @property
    def age(self):
        return self.age
    
    @age.setter
    def age(self,age):
            self.age=age    
emp=employee()
emp.name="Mohsin"
emp.show()#will display maham instead of mohsin as class method used

#PROPERTY DECORATOR used within class

