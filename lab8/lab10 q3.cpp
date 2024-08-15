#include <iostream>
#include <string>
using namespace std;

class Furniture{
    string name;
    float price;
    int quantity;
    
public:
    Furniture(){}
    
    Furniture(string n, float p, int q) : name(n), price(p), quantity(q){}
    
    Furniture operator+(Furniture& obj){
        Furniture temp;
        temp.name = name + " " + obj.name;
        temp.price = price + obj.price;
        temp.quantity = min(quantity, obj.quantity);
        return temp;
    }
    
    void display(){
        cout <<"Name: "<<name<< endl;
        cout <<"Price: $"<<price<< endl;
        cout <<"Quantity: "<<quantity<< endl;
    }
};

int main(){
	
    Furniture chair("Wooden Chair", 50.0, 10);
    Furniture table("Glass Table", 100.0, 5);
    Furniture newf=chair+table;
    cout<<"Details of furniture combined:\n";
    newf.display();
    
    return 0;
}