#include <iostream>
#include <cstring>
#include <string>
using namespace std;

#define Max_books 100

struct Books{
    int pyear;
    char author[50];
    char title[50];
    char genre[30];
     
};

void bookinfo(struct Books book[], int count) {
    cout << "Book Information:\n";

    for(int i = 0; i < count; i++) {
        cout << "Publication year: " << book[i].pyear << endl;
        cout << "Author Name: " << book[i].author << endl;
        cout << "Book Title: " << book[i].title << endl;
        cout << "Genre: " << book[i].genre << endl << endl;
    }
}

void addnewbook(struct Books book[], int &count) {
    if (count < Max_books) {
        cout << "Enter book details:\n";
        cout << "Publication year: ";
        cin >> book[count].pyear;
        cout << "Book Title: ";
        cin.ignore();
        cin.getline(book[count].title, 50);
        cout << "Author name: ";
        cin.getline(book[count].author, 50);
        cout << "Genre: ";
        cin.getline(book[count].genre, 30);
        count++;
        cout << "Book added successfully!\n";
    } else {
        cout << "No space left to add a new book!\n";
    }
}

void authorsearch(struct Books book[], int count) {
    char searchauthor[50];
    cout << "Enter the author name you want to search the book of: ";
    cin.ignore();
    cin.getline(searchauthor, 50);

    cout << "Books by author " << searchauthor << ":\n";
    for (int i = 0; i < count; i++) {
        if (strcmp(book[i].author, searchauthor) == 0) {
            cout << "Book Title: " << book[i].title << endl;
        }
        
    }
}

void booksbytitle(struct Books book[], int count) {
    char searchtitle[50];
    int titlecount = 0;

    cout << "Enter the name of the book you want to search: ";
    cin.ignore();
    cin.getline(searchtitle, 50);

    for (int i = 0; i < count; i++) {
        if (strcmp(searchtitle, book[i].title) == 0) {
            titlecount++;
        }
    }
    cout << "Number of books by title " << searchtitle << ": " << titlecount << endl;
}

void totalbooks(int count) {
    cout << "Total books in library: " << count << endl;
}

int main() {
    struct Books book[Max_books];
    int bookcount = 0;
    int choice;

    do {
        cout << "\nLIBRARY PROGRAM!\n";
        cout << "1 - Display book information\n";
        cout << "2 - Add a new book\n";
        cout << "3 - Display all the books of a particular author\n";
        cout << "4 - Display the number of books of a particular title\n";
        cout << "5 - Display the total number of books in the library\n";
        cout << "0 - Exit\n";

        cout << "Choose an Option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                bookinfo(book, bookcount);
                break;
            case 2:
                addnewbook(book, bookcount);
                break;
            case 3:
                authorsearch(book, bookcount);
                break;
            case 4:
                booksbytitle(book, bookcount);
                break;
            case 5:
                totalbooks(bookcount);
                break;
            case 0:
                cout << "EXITING PROGRAM\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}
