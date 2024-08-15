#include<iostream>
using namespace std;

class RestaurantMeal{
    protected:
    string fname;
    float price;
    float total=0;
    public:
    RestaurantMeal(string n,float fee){
        fname = n;
        price = fee;
        total = total + fee;
    }
    void display(){
        cout<<"Food: "<<fname<<endl;
        cout<<"Food price: RS "<<price<<endl;
    }
};
class HotelService{
    protected:
    string sname;
    float servicefee;
    int roomnum;
    public:
    HotelService(string n,float fee,int num){
        sname = n;
        servicefee = fee;
        roomnum = num;
    }
    void display(){
        cout<<"Service Name: "<<sname<<endl;
        cout<<"Service Fee: RS "<<servicefee<<endl;
        cout<<"Room Number: "<<roomnum<<endl;
    }
};
class RoomServiceMeal : public HotelService, public RestaurantMeal {
public:
    RoomServiceMeal(string n, float fee, int num)
        : HotelService("Room Service", 400, num), RestaurantMeal(n, fee) {}

    void dispfunc(){
        RestaurantMeal::display();
        HotelService::display();
        cout<<"Total of the meals and the room service: RS ";
        cout<<total + servicefee;
    }
};
int main()
{
    RoomServiceMeal meal("Beef Steak",2200.5,1202);
    meal.dispfunc();
}