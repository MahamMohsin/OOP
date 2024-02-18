#include <iostream>
#include <string>
using namespace std;

class book{
    string name;
    string author;
    int ISBN;
    int pgsnum;
    int pgsread;

    public:
    book():pgsnum(1000),pgsread(0){}

    void setname(string Name){
        name=Name;
    }
    void setauthor(string auth){
        author=auth;
}
    void setisbn(int isbn){
        ISBN=isbn;
    }

    void printinfo(){
    cout<<"Book Name: "<<name<<endl;
    cout<<"Book Author: "<<author<<endl;
    cout<<"Book ISBN number: "<<ISBN<<endl;
    cout<<"Total pages: "<<pgsnum<<endl;
    cout<<"Pages read: "<<pgsread<<endl;
}

void readupdate(int read){
    if(read==pgsnum){
        cout<<"You have completed the book."<<endl;
    }
    else{
        pgsread=pgsnum-read;
        cout<<pgsread<<"\npages left to finish the book"<<endl;
    }
}
};

int main(){

    book b;
    int readpgs;

    cout<<"Enter number of pages read: "<<endl;
    cin>>readpgs;
    b.setname("Silent Patient");
    b.setauthor("Alex Michael");
    b.setisbn(3455);
    b.readupdate(readpgs);
    b.printinfo();

    return 0;




}
