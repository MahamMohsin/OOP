#include <iostream>
using namespace std;

class animal{
public:

virtual void eat()=0;
virtual void sound()=0;
};

class cat:public animal{
    public:
    void eat()override{
    cout<<"Cat drinks milk"<<endl;
    }

    void sound()override{
    cout<<"Cat says meow meow"<<endl;
    }
};

class lion:public animal{
public:
void eat()override{
cout<<"Lion eats meat"<<endl;
    }

void sound()override{
        cout<<"Lion roars"<<endl;
    }
};

int main(){
	animal *a;
    cat c;
    lion l;

a=&c;
    a->eat();
    a->sound();

    l.eat();
    l.sound();

return 0;
}
