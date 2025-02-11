class complex:
    def __init__(self,r,i):
        self.r=r
        self.i=i
    
    def __add__(self,c2):
        return complex(self.r+c2.r,self.i+c2.i)
    
    def __mul__(self,c2):
        # (a+bi)(c+di) = (ac-bd) + (ad+bc)i
        real = self.r*c2.r - self.i*c2.i
        imag = self.r*c2.i + self.i*c2.r
        return complex(real, imag)
    
    def __str__(self):#to show the output in complex format
        return f"{self.r} + {self.i}i"

c1=complex(1,2)
c2=complex(3,5)
print(c1+c2)
print(c1*c2)
