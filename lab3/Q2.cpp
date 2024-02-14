#include <iostream>
#include <string>
using namespace std;

class WaterBottle
{
        string company;
        string color;
        float liters;
        float milliliters;

    public:
        void setcompany(string companyName)
        {
            company = companyName;
        }

        void setcolor(string bottleColor)
        {
            color = bottleColor;
        }

        void setmilliliters(float capacityInMilliliters)
        {
            milliliters = capacityInMilliliters;
            liters = milliliters / 1000;
        }

        void setliters(float capacityInLiters)
        {
            liters = capacityInLiters;
            milliliters = liters * 1000;
        }

        string getcompany()
        {
            return company;
        }

        string getcolor()
        {
            return color;
        }

        float getliters()
        {
            return liters;
        }

        float getmilliliters()
        {
            return milliliters;
        }

        void updateWaterCapacity(float consumedMilliliters)
        {
            if (consumedMilliliters <=milliliters)
            {
                milliliters -= consumedMilliliters;
                liters = milliliters / 1000;
            }
            else
            {
                cout << "Amount consumed exceeds the available water capacity, cannot update water capacity.\n";
            }
        }
};


int main()
{
    string company;
    string color;
    float liters;
    float  milliliters;
    float water_consumed;
    
    WaterBottle bottle;

    cout << "Enter Company Name: ";
    cin>>company;
    
    cout << "Enter color: ";
    cin>>color;

    cout << "Enter capacity in litres: ";
    cin >> liters;

    cout << "Enter capacity in milliliters: ";
    cin >> milliliters;

    bottle.setcompany(company);
    bottle.setcolor(color);
    bottle.setliters(liters);
    bottle.setmilliliters(milliliters);


    cout << "Company: " << bottle.getcompany() << "\n";
    cout << "Color: " << bottle.getcolor() << "\n";
    cout << "Capacity (Liters): " << bottle.getliters() << " L\n";
    cout << "Capacity (Milliliters): " << bottle.getmilliliters() << " ml\n\n";

    cout << "Enter amount of water consumed: ";
    cin >> water_consumed;

    bottle.updateWaterCapacity(water_consumed);

    cout << "\nRemaining Capacity (Liters): " << bottle.getliters() << " L\n";
    cout << "Remaining Capacity (Milliliters): " << bottle.getmilliliters() << " ml\n";

    return 0;
}