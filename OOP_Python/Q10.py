#overload the len method to show dimension of vector

class vector:
    def __init__(self,list):
        self.list=list
    
    def __len__(self):
        return len(self.list)
    
v1=vector([1,2,3])#made a list
print(len(v1))#output 3