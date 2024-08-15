#include<iostream>
using namespace std;

class Location{
int latitude;
int longitude;

public:
Location(int lat, int lon):latitude(lat),longitude(lon) {}

void display ()const{
    cout<<"Latitude: "<<latitude<<endl;
    cout<<"Longitude: "<<longitude<<endl;
}
    Location& operator++() {
        ++latitude;
        ++longitude;
        return *this;
    }

    Location operator++(int) {
        Location temp = *this;
        ++(*this);
        return temp;
    }

    Location operator+(int value) const {
        return Location(latitude + value, longitude + value);//nrmal for rhs
    }

    friend Location operator+(int value, const Location& loc) {
        return Location(loc.latitude + value, loc.longitude + value);//friend function for lhs
    }

};

class Details: public Location{
string address;

public:
Details(int lat,int lon,string add):Location(lat,lon),address(add){}
void display()const{
    Location::display();
    cout<<"Address: "<<address<<endl;
}
};

int main(){

Details details(30,50,"27 Street");
Location obj1(10, 20);
Location obj2(5, 30);
Location obj3(90, 90);

details.display();
cout << "Obj1:" <<endl;
obj1.display();
cout << "Obj2:" <<endl;
obj2.display();
cout << "Obj3:" <<endl;
obj3.display();

    cout << "After pre-incrementing obj1:" << endl;
    (++obj1).display();

    cout << "After post-incrementing obj1 and assigning to obj2:" << endl;
    obj2 = obj1++;
    obj2.display();

    cout << "After adding 10(on RHS) to obj1 and assigning to obj2:" << endl;
    obj2 = obj1 + 10;
    obj2.display();

    cout << "After adding 10(on LHS) to obj1 and assigning it to obj2:" << endl;
    obj2 = 10 + obj1;
    obj2.display();

    obj1 = obj2 = obj3;
    cout << "After assigning obj3 to obj1 and obj2:" << endl;
    cout << "Obj1:" <<endl;
    obj1.display();
    cout << "Obj2:" <<endl;
    obj2.display();
    cout << "Obj3:" <<endl;
    obj3.display();

    Location* locptr = &details;
    cout << "Address of details (via Location pointer): " << locptr << endl;

    return 0;
}
