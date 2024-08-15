#include<iostream>
using namespace std;

class Account{
	protected:
    double balance;
    
    public:
    Account(double b){
        if(b>=0.0){
            balance = b;
        }
        else{
            cout<<"ERROR! The initial balance was invalid."<<endl;
            balance = 0.0;
        }
    }
    void addbalance(int b){
        balance = balance + b;
    }
    
    bool withdrawb(int b){
        if(b<=balance){
            balance = balance - b;
            return true;
        }
        
        else{
            cout<<"Amount exceeds the account balance"<<endl;
            return false;
        }
    }
    
    double getbalance(){
        return balance;
    }
};

class Savings : public Account{
    double interestRate;
    
    public:
    Savings(double rate,double b):interestRate(rate),Account(b){}
    
    double calcinterest(){
        return (interestRate/100.0) * getbalance();
    }
}; 

class CheckingAccount : public Account{
    double feecharged;
    
    public:
    CheckingAccount(double fee,double b) : feecharged(fee),Account(b){}
    
    void addbalance(int b){
        balance = balance + b;
		balance=balance-feecharged;
    }
    
    void withdrawb(int b){
        if(Account::withdrawb(b)){
             balance = balance  - feecharged;
        }
    }
};
int main()
{
    Account a(5000);
    a.addbalance(5000);
    a.withdrawb(2000);
    cout<<"Balance(Account): "<<a.getbalance();
    cout<<"\n\n";
    
    Savings s(5.5,12000);
    double i = s.calcinterest();
    cout<<"Interest Calculated: "<<s.calcinterest()<<endl;
    s.addbalance(i);
    cout<<"Balance(Saving Account): "<<s.getbalance();
    cout<<"\n\n";
    
    CheckingAccount c(200,2000);
    c.addbalance(1000);
    c.withdrawb(500);
    cout<<"Balance(Checking Account Class): "<<c.getbalance();
    
    return 0;
}