#class train which has methods to book a ticket,get status(num of seats) and get fare info of train running under PAK RAILWAYS

from random import randint
class train:
    totalseat=100
    def __init__(self,trainname):
        self.trainname=trainname
        
    def book(self):
        if(train.totalseat>0):
            print("Ticket booked!")
            train.totalseat-=1
        else:
            print("No seats available!")
        
    def status(self):
        print("Total available seats: ",train.totalseat) 
        print("Your seat number is: ",randint(1,100))  
    
    def fare(self):
        print("Fare of Train:",self.trainname,"is PKR5000")

passenger=train("Karachi Express")
passenger.book()#ticket booked
passenger.status()
passenger.fare()