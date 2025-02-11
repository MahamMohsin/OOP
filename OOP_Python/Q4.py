#create a class 2d vector and use it to create a class 3d vector

class twodvector:
    def __init__(self,i,j):
        self.i=i
        self.j=j
        
    def show(self):
        print(f"{self.i}i + {self.j}j")

class threedvector(twodvector):
    def __init__(self, i, j,k):
        super().__init__(i, j) 
        self.k=k
        
    def show(self):
        print(f"{self.i}i + {self.j}j + {self.k}k")       
    
a=input("Enter i: ")
b=input("Enter j: ")
obj=twodvector(a,b)
print("2D Vector: ")
obj.show()

c=input("Enter k: ")
print("3D Vector: ")
obj1=threedvector(a,b,c)
obj1.show()