#include <iostream>
using namespace std;

const int MAX_EMPLOYEES = 100;

class Employee {
protected:
    string name;
    double baseSalary; // Base salary or hourly rate
public:
    Employee(string n, double bs) : name(n), baseSalary(bs) {}

    virtual double calculateSalary()= 0;

    virtual void displayPaycheck(){
        cout << "Pay to: " << name << endl;
        cout << "Amount: $" << calculateSalary() << endl;
    }

};

// Class for hourly employees
class HourlyEmployee : public Employee {
protected:
    double hoursWorked;
    double overtimeHours;
public:
    HourlyEmployee(string n, double bs) : Employee(n, bs), hoursWorked(0.0), overtimeHours(0.0) {}

    void recordWorkHours(double regularHours, double overtime) {
        hoursWorked = regularHours;
        overtimeHours = overtime;
    }

    double calculateSalary()override {
        double totalHours = hoursWorked + overtimeHours;
        return baseSalary * totalHours;
    }
};

// Class for salaried employees
class SalariedEmployee : public Employee {
protected:
    double bonus;
public:
    SalariedEmployee(string n, double bs, double b = 0.0) : Employee(n, bs), bonus(b) {}

    double calculateSalary()override {
        return baseSalary + bonus;
    }
};

class PayrollSystem {
private:
    Employee* employees[MAX_EMPLOYEES];
    int numEmployees;

public:
    PayrollSystem() : numEmployees(0) {}

    void addEmployee(Employee* emp) {
        if (numEmployees < MAX_EMPLOYEES) {
            employees[numEmployees++] = emp;
        } else {
            cout << "Maximum number of employees reached!" << endl;
        }
    }

    void processPayroll() {
        for (int i = 0; i < numEmployees;i++) {
            employees[i]->displayPaycheck();
        }
    }

};

int main() {
    PayrollSystem payroll;

    HourlyEmployee* h = new HourlyEmployee("Samantha Sehna", 30.0);
    h->recordWorkHours(35.0, 5.0);
    payroll.addEmployee(h);

    SalariedEmployee* s = new SalariedEmployee("John Smith", 4000.0, 500.0);
    payroll.addEmployee(s);

    payroll.processPayroll();

    return 0;
}
