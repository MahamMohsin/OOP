#include <iostream>
using namespace std;

class loan{
protected:
double loanamt;
double interestrate;
int duration;
public:
loan(int amt,float rate,int d):loanamt(amt),interestrate(rate),duration(d){
    if(loanamt<=0 || interestrate<0 || interestrate>10.0 || duration<0){
        throw string("Exception occured");
    }
}

virtual double calculatemonthlypays()const=0;
virtual void display()const=0;
friend class loanmanager;//obj sent of main class while implementation
static double calculatetotalinterestpaid(const loan &l);
};

//datatype classname::funcname
double loan::calculatetotalinterestpaid(const loan&l){
cout<<"FOR TOTAL INTEREST PAID"<<endl;
}

class carloan:public loan{
public:
carloan(double amt,double r,int d):loan(amt,r,d){}

double calculatemonthlypays()const override{
    double interest= loanamt*interestrate;//interest calculated
    double total_amount=loanamt+interest;//total payment
    return total_amount/duration;//getting the amount to be payed in duration of months
}
void display()const override{
    cout<<"Loan Amount: "<<loanamt<<endl;
    cout<<"Interest Rate: "<<interestrate<<endl;
    cout<<"Duration: "<<duration<<endl;
    cout<<"Monthly payment: "<<calculatemonthlypays()<<endl;
}
};

class homeloan:public loan{
    public:
homeloan(double amt,double r,int d):loan(amt,r,d){}

    double calculatemonthlypays()const override{
    double interest= loanamt*interestrate;//interest calculated
    double total_amount=loanamt+interest;//total payment
    return total_amount/duration;//getting the amount to be payed in duration of months
}
void display()const override{
    cout<<"Loan Amount: "<<loanamt<<endl;
    cout<<"Interest Rate: "<<interestrate<<endl;
    cout<<"Duration: "<<duration<<endl;
    cout<<"Monthly payment: "<<calculatemonthlypays()<<endl;
}
};

class bussinessloan:public loan{
    public:
    bussinessloan(double amt,double r,int d):loan(amt,r,d){}

    double calculatemonthlypays()const override{
    double interest= loanamt*interestrate;//interest calculated
    double total_amount=loanamt+interest;//total payment
    return total_amount/duration;//getting the amount to be payed in duration of months
}
void display()const override{
    cout<<"Loan Amount: "<<loanamt<<endl;
    cout<<"Interest Rate: "<<interestrate<<endl;
    cout<<"Duration: "<<duration<<endl;
    cout<<"Monthly payment: "<<calculatemonthlypays()<<endl;
}
};

class loanmanager{
public:
void approve(loan &l){
 if(l.duration<2){
    cout<<"Loan not approved"<<endl;
 }
 else{
    cout<<"Loan Approved"<<endl;
 }
}

void calculatetotalinterest(loan &l){
double interest=l.interestrate*l.loanamt;
cout<<"Total interest: "<<interest<<endl;
}
};

int main() {
    try {
        carloan myCarLoan(3000, 0.5, 3); // Create an instance of carloan

        // Now you can use the loan manager to approve and calculate interest
        loanmanager manager;
        manager.approve(myCarLoan); // Check loan approval status

        // Display loan details
        myCarLoan.display();

        // Calculate and display total interest paid
        double totalInterest = loan::calculatetotalinterestpaid(myCarLoan);
        cout << "Total Interest Paid: " << totalInterest << endl;

    } catch (string e) {
        cout << e << endl; // Output the caught exception message
    }

    return 0;
}




