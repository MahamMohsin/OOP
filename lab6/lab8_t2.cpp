#include<iostream>
using namespace std;
class Account{
    protected:
    double balance;
    public:
    Account(double balance_){
        if(balance_>=0.0){
            balance = balance_;
        }
        else{
            cout<<"Error the initial balance was invalid."<<endl;
            balance = 0.0;
        }
    }
    void Add_balance(int balance_){
        balance = balance + balance_;
    }
    bool Withdraw(int balance_){
        if(balance_<=balance){
            balance = balance - balance_;
            return true;
        }
        else{
            cout<<"Debit amount exceeded account balance."<<endl;
            return false;
        }
    }
    double get_balance(){
        return balance;
    }
};
class Savings : public Account{
    double interest_rate;
    public:
    Savings(double rate,double balance_) : Account(balance_){
        interest_rate = rate;
    }
    double calculate_interest(){
        return interest_rate * get_balance();
    }
}; 
class CheckingAccount : public Account{
    double fee_charged;
    public:
    CheckingAccount(double fee,double balance_) : Account(balance_){
        fee_charged = fee;
    }
    void Add_balance(int balance_){
        balance = balance + balance_ - fee_charged;
    }
    void Withdraw(int balance_){
        if(Account::Withdraw(balance_)){
             balance = balance  - fee_charged;
        }
    }
};
int main()
{
    Account a1(5000);
    a1.Add_balance(100);
    a1.Withdraw(50);
    cout<<"Balance for Account class "<<a1.get_balance()<<endl;
    cout<<"\n";
    Savings save(4.5,12000);
    double x = save.calculate_interest();
    cout<<"Calculated Interest "<<save.calculate_interest()<<endl;
    save.Add_balance(x);
    cout<<"Balance for Savings class "<<save.get_balance()<<endl;
    cout<<"\n";
    CheckingAccount check(20,200);
    check.Add_balance(100);
    check.Withdraw(50);
    cout<<check.get_balance();
}