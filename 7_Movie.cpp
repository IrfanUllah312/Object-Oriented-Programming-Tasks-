#include <iostream>
using namespace std;

class Movie {
    string title;
    int releaseYear;
    float rating;

public:
    Movie(string t, int y, float r) {
        title = t;
        releaseYear = y;
        rating = r;
    }

    void display() {
        cout << "Movie Title: " << title << endl;
        cout << "Release Year: " << releaseYear << endl;
        cout << "Rating: " << rating << endl;
    }
};

int main() {
    Movie m1("Inception", 2010, 8.8);
    m1.display();
    return 0;
}
