#include <iostream>
using namespace std;

class Person {
    int age;
protected:
    string name;
public:
    Person(int a, string n):age(a),name(n){}
    
    int getAge() {
        return age;
    }
    
    string getName() {
        return name;
    }
};

class Employee {
    int empid;
protected:
    float salary;
public:
    Employee(int id, float s):empid(id), salary(s) {}
    
    int getId() {
        return empid;
    }
    
    float getSalary() {
        return salary;
    }
};

class Manager : public Person, public Employee {
    string type;
public:
    Manager(string typ, int a, string n, float s, int id):Person(a, n), Employee(id, s), type(typ){}
    
    string getType(){
        return type;
    }
};

class ITManager : public Manager {
    int noOfPersons;
public:
    ITManager(int a, string n, int id, float s, string typ, int p):Manager(typ, a, n, s, id), noOfPersons(p){}
    
    void display() {
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "ID: " << getId() << endl;
        cout << "Salary: " << getSalary() << endl;
        cout << "Type: " << getType() << endl;
    }
};

int main() {
    ITManager obj(40, "Babbar Khan", 11480, 50000.5, "Executive", 20);
    obj.display();
    
    return 0;
}
