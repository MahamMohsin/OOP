#write a vector class of n dimensions.
#Overload the + and * operatorss that will cal sum and dot product of them

class vector:
    def __init__(self,i,j,k):
        self.i=i
        self.j=j
        self.k=k
        
    def __add__(self,vec2):
        return vector(self.i+vec2.i,self.j+vec2.j,self.k+vec2.k)
    
    def __mul__(self,vec2):
        result=self.i*vec2.i + self.j*vec2.j + self.k*vec2.k
        return result
    
    def __str__(self):
        return f"{self.i}i + {self.j}j + {self.k}k"
    

v1=vector(1,2,3)
v2=vector(2,3,4)
print(v1+v2)
print(v1*v2)