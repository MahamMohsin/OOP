#include <iostream>
#include <string>
using namespace std;

class Smartphone{
string company;
string model;
string displayres;
int ram;
int rom;
int storage;

public:
void setcompany(string comp){
    company=comp;
}
void setmodel(string Model){
    model=Model;
}
void setdisp(string resolution){
    displayres=resolution;
}
void setram(int RAM){
    ram=RAM;
}
void setrom(int ROM){
    rom=ROM;
}
void setstorage(int memory){
    storage=memory;
}
string getcompany(){
    return company;
}
string getmodel(){
    return model;
}
string getdisp(){
    return displayres;
}
int getram(){
    return ram;
}
int getrom(){
    return rom;
}
int getstorage(){
    return storage;
}
void phonecall(string number){
    cout<<model<<" dialing number "<<number<<endl;
}
void sendmsg(string receiver){
    cout<<model<<" sent a message to "<<receiver<<endl;
}
void connectwifi(string wifi){
    cout<<company<<" "<<model<<" connected to "<<wifi<<endl;
}
void browse(string search){
    cout<<model<<" is searching for "<<search<<endl;
}
};
int main(){
    Smartphone a,b;

    a.setcompany("Apple");
    a.setmodel("Iphone 13");
    a.setdisp("2532 x 1170 pixels");
    a.setram(4);
    a.setrom(8);
    a.setstorage(128);

    b.setcompany("Samsung");
    b.setmodel("Galaxy S21");
    b.setdisp("2400 x 1080 pixels");
    b.setram(8);
    b.setrom(8);
    b.setstorage(128);

    cout<<"SMARTPHONE 1 INFO:\n";
    cout<<"Brand: "<<a.getcompany()<<endl;
    cout<<"Model: "<<a.getmodel()<<endl;
    cout<<"Display Resolution: "<<a.getdisp()<<endl;
    cout<<"RAM: "<<a.getram()<<endl;
    cout<<"ROM: "<<a.getrom()<<endl;
    cout<<"Storage: "<<a.getstorage()<<endl;
    cout<<"\n";

    a.phonecall("03002047654");
    a.sendmsg("Faris");
    a.connectwifi("PTCL");
    a.browse("best tourist spots in Islamabad");

    cout<<"\nSMARTPHONE 2 INFO:\n";
    cout<<"Brand: "<<b.getcompany()<<endl;
    cout<<"Model: "<<b.getmodel()<<endl;
    cout<<"Display Resolution: "<<b.getdisp()<<endl;
    cout<<"RAM: "<<b.getram()<<endl;
    cout<<"ROM: "<<b.getrom()<<endl;
    cout<<"Storage: "<<b.getstorage()<<endl;
    cout<<"\n";

    b.phonecall("03452047654");
    b.sendmsg("Ali");
    b.connectwifi("Stormfiber");
    b.browse("eateries nearby Gultistan-e-Johar");


    return 0;

}

