#include <iostream>
#include <cstring>
using namespace std;

class String {
    char *strdata;
    int size;
    
public:
    String() : strdata(nullptr), size(0) {}
    
    String(int s,char str[]) : size(s) {
        strdata = new char[s + 1];
        strcpy(strdata, str);
    }
    
    String(const String& other) : size(other.size) {
        strdata = new char[size + 1];
        strcpy(strdata, other.strdata);
    }
    
    ~String() {
        delete[] strdata;
    }
    
    String& operator=(const String& other) {
        if (this != &other) {
            delete[] strdata;
            size = other.size;
            strdata = new char[size + 1];
            strcpy(strdata, other.strdata);
        }
        return *this;
    }
    
    void display() const {
        cout << strdata<<endl;
        cout << "Size of the string is " <<size<<endl;
    }
};

int main(){
    String str1(20, "Chandler Bing Jokes");
    String str2;
    str2=str1;
    
    cout<<"string1: ";
    str1.display();
    cout<<endl;
    
    cout <<"string2: ";
    str2.display();
    cout<<endl;
    
    return 0;
}
