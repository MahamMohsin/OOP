#include <iostream>
#include <string>
using namespace std;

class Product{
protected:
    string barcode;
    string name;

public:
    Product(string b = "", string n = "") : barcode(b), name(n) {}

    void setCode(string b){
        barcode = b;
    }

    string getCode(){
        return barcode;
    }

    virtual void scanner(){
        cout << "Product Name: " << name << endl;
        cout << "Barcode: " << barcode << endl;
    }

    virtual void printer(){
        scanner();
    }
};

class PrepackedFood : public Product{
protected:
    float unitprice;

public:
    PrepackedFood(float prize = 0.0, string name = "", string barcode = ""): Product(barcode, name), unitprice(prize) {}

    float getPrice(){
        return unitprice;
    }

    void setPrice(float up){
        unitprice = up;
    }

    void scanner()override{
        cout << "Prepacked Foods: " << endl;
        Product::scanner();
        cout << "Unit price: " << unitprice << endl;
    }

    void printer()override{
        scanner();
    }
};

class FreshFood : public Product {
protected:
    float weight;
    float priceperkilo;

public:
    FreshFood(float w = 0.0, float ppk = 0.0, string b = "", string n = ""): Product(b, n), weight(w), priceperkilo(ppk) {}

    void setWeight(float w){
        weight = w;
    }

    float getWeight(){
        return weight;
    }

    void setPricePerKilo(float ppk) {
        priceperkilo = ppk;
    }

    float getPricePerKilo()  {
        return priceperkilo;
    }

    void scanner()override{
        cout << "Fresh Food: " << endl;
        Product::scanner();
        cout << "Weight: " << weight << endl;
        cout << "Price per kilo: " << priceperkilo << endl;
    }

    void printer()override{
        scanner();
    }
};

int main() {
    Product product1("NA567", "Chocolate");
    PrepackedFood product2(35.8, "Chips", "ZR675");
    FreshFood product3(42.5, 30.8, "RT567", "Patties");

    cout << "Product 1:" << endl;
    product1.scanner();
    product1.printer();
    cout << endl;

    cout << "Product 2:" << endl;
    product2.scanner();
    product2.printer();
    cout << endl;

    cout << "Product 3:" << endl;
    product3.setCode("RT567");
    product3.setWeight(42.5);
    product3.setPricePerKilo(30.2);
    product3.scanner();
    product3.printer();
    cout << endl;

    return 0;
}