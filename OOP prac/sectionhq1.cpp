#include<iostream>
#include<string>
using namespace std;
class ship{
    protected:
    string name;
    int year_built;
    float length;
    int capacity;
    public:
    ship(string n,int b_y,float l,int c)
    {
        name=n;
        year_built=b_y;
        length=l;
        capacity=c;
    }
    virtual  void display(){
    cout<<"the name ship is "<<name<<endl;
    cout<<"the built in year is "<<year_built<<endl;
    cout<<"the length is "<<length<<endl;
    cout<<"the capacity of the ship is "<<capacity<<endl;
    }
};
class navalvessel : public ship{
  protected:
  string ship_class;
  int missiles;
  string armament;
  public:
  navalvessel(string n,int b_y,float l,int c,string s_c,int miss,string arn):ship(n,b_y,l,c){
    ship_class=s_c;
    missiles=miss;
    armament=arn;
  }
  void setmissiles(int a)
  {
    missiles=a;
  }
  void deploytorpedoes(int b)
  {
    setmissiles(b);
  }
  void firemissile()
  {
    missiles--;
  }
  void display(){
    cout<<"the name ship is "<<name<<endl;
    cout<<"the built in year is "<<year_built<<endl;
    cout<<"the length is "<<length<<endl;
    cout<<"the capacity of the ship is "<<capacity<<endl;
    cout<<"the ship class is "<<ship_class<<endl;
    cout<<"the nember of missiles are "<<missiles<<endl;
    cout<<"the arnaments are "<<armament<<endl;
    }
};
class cargoship : public ship{
  protected:
  string type;
  string container;
  public:
 cargoship(string n,int b_y,float l,int c,string t,string con): ship (n,b_y,l,c) 
 {
   type=t;
   container=con;
 }
 void loadcargo(string con)
 {
    container=con;
    cout<<"carfo loaded "<<endl;
 }
 void unload_cargo()
 {
    container="";
    cout<<"cargo unloaded"<<endl;
 }
 void display(){
    cout<<"the name ship is "<<name<<endl;
    cout<<"the built in year is "<<year_built<<endl;
    cout<<"the length is "<<length<<endl;
    cout<<"the capacity of the ship is "<<capacity<<endl;
    cout<<"the ship type is "<<type<<endl;
    cout<<"the container is "<<container<<endl;
    }
};
class cruiseship :public ship{
  protected:
  int  passenger_capacity;
  string destination;
  public:
  cruiseship(string n,int b_y,float l,int c,int  p_c,string des): ship (n,b_y,l,c) 
  {
    passenger_capacity=p_c;
    destination=des;
  }
  void bookcabin(int c)
  {
    if(c<passenger_capacity)
    {
        cout<<"cabin is booked "<<endl;
    }
    else
    {
        cout<<"given number of passengers is exceeding the capacity"<<endl;
    }
  }
  void  update_capacity(int a)
  {
    if (a>passenger_capacity)
    {
        passenger_capacity=a;
        cout<<"capacity updated"<<endl;
    }
    else 
    {
        cout<<"capacity cannot be updated "<<endl;
    }

  }
  void display(){
    cout<<"the name ship is "<<name<<endl;
    cout<<"the built in year is "<<year_built<<endl;
    cout<<"the length is "<<length<<endl;
    cout<<"the capacity of the ship is "<<capacity<<endl;
    cout<<"the passenger capacity is "<<passenger_capacity<<endl;
    cout<<"the destination is "<<destination<<endl;
    }
};
int main ()
{
  ship *array[3];
  navalvessel n_v("titanic",2012,300.4,200,"vip",10,"gun");
  cargoship c_s("kishti",2024,20.9,10,"wood","box");
  cruiseship C_S("AnD cruise",2020,300.65,500,300,"england");
  array[0]=&n_v;
  array[1]=&c_s;
  array[2]=&C_S;
  int i;
  for(i=0;i<3;i++)
  {
    cout<<"display"<<endl;
    array[i]->display();
  }
  return 0;

}