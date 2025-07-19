#include <iostream>
using namespace std;

class Rectangle {
    int length, width;

public:
    Rectangle() {
        length = 1;
        width = 1;
    }

    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << length * width << ", Perimeter: " << 2 * (length + width) << endl;
    }
};

int main() {
    cout << "Rectangle 1:" << endl;
    Rectangle r1;
    r1.display();

    cout << "Rectangle 2:" << endl;
    Rectangle r2(4, 3);
    r2.display();

    return 0;
}
