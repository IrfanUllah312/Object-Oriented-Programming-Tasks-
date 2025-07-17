#include <iostream>
using namespace std;

class Book {
    string title, author;
    float price;

public:
    Book(string t, string a, float p) {
        title = t;
        author = a;
        price = p;
    }

    void display() {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Book b1("C++ Programming", "Bjarne Stroustrup", 50);
    b1.display();
    return 0;
}
