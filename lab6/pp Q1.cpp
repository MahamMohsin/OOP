#include <iostream>
#include <string>
using namespace std;

class Employee{
string name;    
static int nextemployeeid;
float salary;
int id;

public:
const float MAX_SALARY=2000.5;

static int generateid(){
    return ++nextemployeeid;
}
 Employee(){  //since id to be generated when object made so constructor made  
   id=Employee::generateid();  //static function syntax else can also be written normally
 } 
// Employee():id(Employee::generatenextid(){})   initializer list used

void setsalary(float sal){
    if(sal>MAX_SALARY){
        salary=MAX_SALARY;
    }
    else{
        salary=sal;
    }
}
float getsalary(){
return salary;
}
void setname(string n){
    name=n;
}
string getname(){
    return name;
}

void display(){
    cout<<"Name: "<<getname()<<endl;
    cout<<"Employee Id: "<<id<<endl;
    cout<<"Salary: "<<getsalary()<<endl;
    }
};
int Employee::nextemployeeid=0;

int main(){
    Employee e;
    Employee e2;
    e.setname("Ali");
    e.setsalary(2000);

    e2.setname("Haider");
    e2.setsalary(2300);

    e.display();
    cout<<endl;
    e2.display();

}