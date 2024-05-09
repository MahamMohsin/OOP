#include <iostream>
using namespace std;

class tour{
    protected:
    string name;
    int duration;
    string destination;

    public:
    tour(string n,int d,string dest):name(n),duration(d),destination(dest){}

    virtual void calculateticket()=0;

    virtual void schedule()=0;
};

class adventure:public tour{
    protected:
    int activities;//number of activities

    public:
    adventure(string n,int duration,string dest,int num_act):tour(n,duration,dest),activities(num_act){}

    void calculateticket()override{
        if(activities>=3 && duration>2){
            cout<<"Ticket price is of RS 1000"<<endl;
        }
        else{
            cout<<"Ticket is of RS 1500"<<endl;
        }
}
void schedule()override{
    cout<<"Trip is scheduled for: "<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Duration is: "<<duration<<" hours"<<endl;
    cout<<"Destination is: "<<destination<<endl;
    cout<<"Number of activities: "<<activities<<endl;
}
};

class cultural:public tour{
protected:
int numsites;
int addedexp;//additional experience offered

public:
cultural(string n,int dur,string dest,int numSites,int addexp):tour(n,dur,dest),numsites(numSites),addedexp(addexp){}

void calculateticket()override{
    if(numsites>2 && addedexp<2){
        cout<<"Ticket price is RS 4000"<<endl;
    }
    else{
        cout<<"Ticket price is RS 5000 "<<endl;
    }
}

void schedule()override{
    cout<<"Trip is scheduled for: "<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Duration is: "<<duration<<" hours"<<endl;
    cout<<"Destination is: "<<destination<<endl;
    cout<<"Number of sites visited: "<<numsites<<endl;
    cout<<"Additional experience offered: "<<addedexp<<endl;
}
};

class wildlife:public tour{
    protected:
    float rarityofsight;//in percentage
    int guideExp;//guide experience 1-10

    public:
    wildlife(string n,int dur,string dest,float rs,int ge):tour(n,dur,dest),rarityofsight(rs),guideExp(ge){}

    void calculateticket()override{
       if(rarityofsight<60.0 && guideExp<6){
        cout<<"Ticket price is RS 3000"<<endl;
       } 
       else{
        cout<<"Ticket is of RS 6000"<<endl;
       }
    }

    void schedule()override{
    cout<<"Trip is scheduled for: "<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Duration is: "<<duration<<" hours"<<endl;
    cout<<"Destination is: "<<destination<<endl;
    cout<<"Rarity of sight in %: "<<rarityofsight<<endl;
    cout<<"Rating of Guide: "<<guideExp<<endl;
   }
};

int main(){
/*for instance you normally make: 
tour *t;
child c;
t=&c; 

t->print();
*/ 

tour *arr[3];
adventure a("Sarah",3,"Karachi",2);
cultural c("Ahmed",5,"Lahore",2,3);
wildlife w("Arsal",5,"Islamabad",50.0,7);

arr[0]=&a;
arr[1]=&c;
arr[2]=&w;

for(int i=0;i<3;i++){
    arr[i]->schedule();
    cout<<endl;
    arr[i]->calculateticket();
    cout<<endl;
}


return 0;
}
