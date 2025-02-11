#Create a pet class from a class animal and further create a class dog from pets and add a bark method to it
#animal->pet->dog(multilevel inheritance)

class animal:
   pass

class pets(animal):
    pass

class dog(pets):
    @staticmethod
    def bark():
        print("Bow Bow!")
        
d=dog()
d.bark()