#include <iostream>
using namespace std;

class User{
    string name;
    
public:
    User(string n):name(n) {}
    
    string getname(){
        return name;
    }
    
    friend void sendmsg(User& s, User& r, string c);
};

class Message{
    string content;
public:
    Message(string c):content(c) {}
    
    friend void sendmsg(User& s, User& r, string c);
};

void sendmsg(User& s, User& r, string c){
	
    cout << "Message from "<<s.getname()<<" sent to "<<r.getname()<<":"<<endl;
    cout << c <<"\n";
}

int main (){
    User user("Sarah");
    User user2("Rabia");
    sendmsg(user, user2, "How are you?hope you'll be fine.");
    
    return 0;
}