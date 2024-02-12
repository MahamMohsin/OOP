#include <iostream>
#include <string>

using namespace std;

struct Register {
    int courseId;
    string courseName;
};

struct Student : public Register {
    string studentId;
    string fname;
    string lname;
    string cell;
    string email;
};

int main() {
    int n;

    cout<<"Enter number of students: ";
    cin>>n; 
    Student students[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter student id: ";
        cin >> students[i].studentId;
        cout << "Enter first name: ";
        cin >> students[i].fname;
        cout << "Enter last name: ";
        cin >> students[i].lname;
        cout << "Enter cell no: ";
        cin >> students[i].cell;
        cout << "Enter email: ";
        cin >> students[i].email;
        cout << "Enter course id: ";
        cin >> students[i].courseId;
        cout << "Enter course name: ";
        cin >> students[i].courseName;
    }
     cout<<"\n";
     cout<<"STUDENTS INFORMATION:\n";

    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1<<":" << endl;
        cout << "Student id: " << students[i].studentId << endl;
        cout << "First name: " << students[i].fname << endl;
        cout << "Last name: " << students[i].lname << endl;
        cout << "Cell no: " << students[i].cell << endl;
        cout << "Email: " << students[i].email << endl;
        cout << "Course id: " << students[i].courseId << endl;
        cout << "Course name: " << students[i].courseName << endl;
    }

    return 0;
}
