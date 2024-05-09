#include <iostream>
using namespace std;
template <class T>
class Plant 
{
protected:
    string name;
    string type;
    T price;
public:
    Plant(string n, string t, T p) 
    {
        name = n;
        type = t;
        price = p;
    }
    string getName() 
    {
        return name;
    }
    string getType() 
    {
        return type;
    }
    T getPrice() 
    {
        return price;
    }
    virtual T calculateCost(int quantity) 
    {
        return price * quantity;
    }
    friend ostream& operator<<(ostream& os, const Plant<T>& plant) 
    {
        os << "Name: " << plant.name << endl;
        os << "Type: " << plant.type << endl;
        os << "Price: $" << plant.price;
        return os;
    }
};
template <class T>
class Project 
{
protected:
    string projectName;
    T totalCost;
public:
    Project(string name) 
    {
        projectName = name;
        totalCost = 0;
    }
    void addPlant(Plant<T>& plant, int quantity) {
        totalCost += plant.calculateCost(quantity);
    }

    T calculateTotalCost() 
    {
        return totalCost;
    }
    void displayProjectDetails() 
    {
        cout << "Project Name: " << projectName << endl;
        cout << "Total Cost: $" << totalCost << endl;
    }
    Project<T>& operator+(Plant<T>& plant) 
    {
        addPlant(plant, 1);
        return *this;
    }
};

int main() 
{
    Plant<double> rose("Rose", "Flower", 5.0);
    Plant<double> oak("Oak", "Tree", 10.0);
    Plant<double> grass("Grass", "Grass", 2.0);
    Plant<double> tulip("Tulip", "Flower", 3.0);
    Project<double> companyLawn("Company Lawn");
    companyLawn = companyLawn + grass;
    companyLawn = companyLawn + rose;
    Project<double> familyPark("Family Park");
    familyPark = familyPark + tulip;
    familyPark = familyPark + oak;
    cout << "Company Lawn Plants:" << endl;
    cout << grass << endl;
    cout << rose << endl;
    companyLawn.displayProjectDetails();
    cout << endl;
    cout << "Family Park Plants:" << endl;
    cout << tulip << endl;
    cout << oak << endl;
    familyPark.displayProjectDetails();
}