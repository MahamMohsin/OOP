#include<iostream>
using namespace std;
class Employee{
    string name;
    int number;
    int age;
};
class Manager : public Employee{
    string title;
    int dues;
    public:
    Manager(){
        cout<<"I am the Manager";
    }
};
class Scientist : public Employee{
    string title;
    string publication;
};
class Labourer : public Employee{
    string title;
};
int main(){
    

}