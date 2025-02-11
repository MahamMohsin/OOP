class number:
    def __init__(self,n):
        self.n=n#here n is instance var
    
    def __add__(self,num):
        return self.n+m.n
         
n=number(10)
m=number(20)
# print(n+m) gives error
print(n+m)#will work now