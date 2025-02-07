class employee:
    name="Maham Mohsin" #this is class attribute
    lang="Python"
    salary=250000
    
    def __init__(obj,name,lang,sal):#dunder mothod automatically called when obj created
        print("Magic method")
        obj.name=name
        obj.lang=lang
        obj.salary=sal
        

emp=employee("Maham Mohsin",500000,"Python")
print(emp.name,emp.lang,emp.salary)