#include <iostream>
#include <cmath>

using namespace std;

class Taxcalculation{
    public:
static double basicRate;
static double luxuryRate;

static double computeCostBasic(double price){
    double cost=price+(price*basicRate/100);
    return roundToNearestValue(cost);
}
static double computeCostluxury(double price){
    double cost=price+(price*luxuryRate/100);
   return roundToNearestValue(cost);
}
static void changeBasicRateTo(double newRate) {
        basicRate = newRate;
    }
static void changeLuxuryRateTo(double newRate) {
        luxuryRate = newRate;
    } 
static double roundToNearestValue(double price) {
        return round(price);//round function called for rounding off the value
    }       

};
double Taxcalculation::basicRate=4;
double Taxcalculation::luxuryRate=10; 

int main(){
    double basicPrice = 200.0;
    double luxuryPrice = 200.0;

    cout<<"Basic cost is: "<<Taxcalculation::computeCostBasic(basicPrice)<<endl;
    cout<<"Luxury cost is: "<<Taxcalculation::computeCostluxury(luxuryPrice)<<endl;

    Taxcalculation::changeBasicRateTo(5.0); // Changing the basic rate to 5%
    Taxcalculation::changeLuxuryRateTo(15.0); // Changing the luxury rate to 15%

    cout<<"New Basic cost is: "<<Taxcalculation::computeCostBasic(basicPrice)<<endl;
    cout<<"New Luxury price is: "<<Taxcalculation::computeCostluxury(luxuryPrice)<<endl;
    
}