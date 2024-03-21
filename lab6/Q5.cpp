#include <iostream>
using namespace std;

class Animal
{
    int age;
    string size;

public:
    Animal() : age(0), size("") {}               // default constructor
    Animal(int a, string s) : age(a), size(s) {} // workhourse constructor

    void setage(int a)
    {
        age = a;
    }
    int getage()
    {
        return age;
    }
    void setsize(string s)
    {
        size = s;
    }
    string getsize()
    {
        return size;
    }
};

class Dog : public Animal
{
    string breed;

public:
    Dog() : breed("") {}                                       // default constructor
    Dog(int a, string s, string b) : Animal(a, s), breed(b) {} // workhourseconstructor

    void setbreed(string b)
    {
        breed = b;
    }
    string getbreed()
    {
        return breed;
    }
    void display()
    {
        cout << "Age: " << getage() << endl;
        cout << "Size: " << getsize() << endl;
        cout << "Breed: " << getbreed() << endl;
    }
};
class Cat : public Animal
{
    int numoflives;

public:
    Cat() : numoflives(0) {}
    Cat(int a, string s, int num) : Animal(a, s), numoflives(num) {}

    void setnumoflives(int num)
    {
        numoflives = num;
    }
    int getnumoflives()
    {
        return numoflives;
    }
    void display()
    {
        cout << "Age: " << getage() << endl;
        cout << "Size: " << getsize() << endl;
        cout << "Number of lives: " << getnumoflives() << endl;
    }
};
int main()
{
    Cat c;// default
    Cat c1(10, "Big", 4);// parameterized constructor
    c.display();
    c1.display();

    cout << "\n";

    Dog d;//default
    Dog d1(5, "Small", "Husky");
    d1.display();
}