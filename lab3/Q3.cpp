#include <iostream>
#include <string>
using namespace std;

class Calendar {
    int currentyear;
    string tasks[12][30]; // array to store task for each day

public:
    void setyear(int year) {
        currentyear = year;
    }

    int getyear() {
        return currentyear;
    }

    // method to add task
    void addtask(int date, int month, string task) {
        if ((date >= 1) && (date <= 30) && (month >= 1) && (month <= 12)) {
            tasks[month - 1][date - 1] = task; // since array starts from zero so minus 1 for storing task in array
            cout << "Task on " << date << "/" << month << "/" << currentyear << " Added\n";
        } else {
            cout << "INVALID ENTRY\n";
        }
    }
    
    //method to remove task
    void removetask(int date, int month) {
        if ((date >= 1) && (date <= 30) && (month >= 1) && (month <= 12)) {
            tasks[month - 1][date - 1] = ""; // task marked empty
            cout << "\nTask on " << date << "/" << month << "/" << currentyear << " Removed\n";
        }
    }
    
    //method to display tasks
    void showtasks() {
    	cout << "\nTASK DETAILS: \n";
        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 30; j++) {
                if (tasks[i][j] != "") // skipping indexes with no string stored
                {
                    cout << i + 1 << "/" << j + 1 << "/" << currentyear << ": " << tasks[i][j] << "\n";
                }
            }
        }
    }
};

int main() {
    int year;
    Calendar calendar; // object made

    cout << "Enter current year: ";
    cin >> year;

    calendar.setyear(year);
    calendar.getyear();

    calendar.addtask(2, 5, "Prepare for OOP quiz");
    calendar.addtask(6, 7, "Go to the gym");
    calendar.addtask(10, 11, "Go for shopping");
    calendar.addtask(9, 3, "Learn a new skill");
    
    //displaying task before removal
    calendar.showtasks();

    calendar.removetask(10, 11);
    
    //displaying task before removal
    calendar.showtasks();

    return 0;
}
