#include <iostream>
using namespace std;

int e=30;

void throwexception(){
    throw (e);
}

void funcC(){
try{
throwexception();
}
catch(int e){
    throw e;//rethrowing the caught exception
}
}

void funcB(){
try{
funcC();
}
catch(int e){
    throw e;
}
}

void funcA(){
try{
funcB();
}
catch(int e){
    throw e;
}
}
int main(){
    try{
        funcA();
    }
    catch(int e){
        cout<<"Exception caught is: "<<e;
    }
}