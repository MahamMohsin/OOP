#include <iostream>
using namespace std;
class Person
{
private:
    int age;

protected:
    string name;

public:
    Person(int age_, string name_)
    {
        age = age_;
        name = name_;
    }
    int get_age(){
        return age;
    }
    string get_name(){
        return name;
    }
};
class Employee
{
private:
    int empid;

protected:
    double salary;

public:
    Employee(double salary_, int id)
    {
        salary = salary_;
        empid = id;
    }
    int get_id(){
        return empid;
    }
    double get_salary(){
        return salary;
    }
};
class Manager : public Person, public Employee
{
private:
    string type;

public:
    Manager(string typ, int age_, string name_, double salary_, int id) : Employee(salary_, id), Person(age_, name_)
    {
        type = typ;
    }
    string get_type(){
        return type;
    }
};
class ITManager : public Manager
{
private:
    int noOfPersons;

public:
    ITManager(int persons, string typ, int age_, string name_, double salary_, int id) : Manager(typ, age_, name_, salary_, id)
    {
        noOfPersons = persons;
    }
    void display()
    {
        cout<<"Name : "<<get_name()<<"  Age: "<<get_age()<<"  ID: "<<get_id()<<"  Salary: "<<get_salary()<<"  Type: "<<get_type()<<endl;
    }
};
int main()
{
    ITManager obj(12,"Executive",43,"Ali",200000.33,23411);
    obj.display();
    return 0;
}
