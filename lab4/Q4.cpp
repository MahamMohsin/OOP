#include <iostream>
#include <string>
using namespace std;

class office{
    string location;
    int seatingspace;
    string furniture[3];
    
    public:
    office(string loc="",int seatcap=0,string f1="",string f2="",string f3=""):location(loc),seatingspace(seatcap),furniture({f1,f2,f3}){
        //parameterized constructor body asked to be left empty 
    }

    void print(){
        cout<<"Location: "<<location<<endl;
        cout<<"Seating Capacity: "<<seatingspace<<endl;
        cout<<"Furniture List: "<<endl;
        for(int i=0;i<3;i++){
            cout<<furniture[i];
            cout<<endl;
        }
    }
};
int main(){
    office off;//zero parameters
    office off1("Gulistan-e-Johar");//1 parameter
    office off2("DHA Phase 8",100);//2 parameters
    office off3("Gulshan",50,"Chair","Desk","Sofa");//all 3 

    cout << "Office 1:" << endl;
    off.print();
    cout << "Office 2:" << endl;
    off1.print();
    cout << "Office 3:" << endl;
    off2.print();
    cout << "Office 4:" << endl;
    off3.print();

    return 0;
    
}