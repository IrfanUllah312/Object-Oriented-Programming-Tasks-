#include <iostream>
#define PI 3.14
using namespace std;

class Circle {
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    float calculateArea() {
        return PI * radius * radius;
    }

    float calculateCircumference() {
        return 2 * PI * radius;
    }

    void display() {
        cout << "Circle with radius: " << radius << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Circumference: " << calculateCircumference() << endl;
    }
};

int main() {
    Circle c1(5);
    c1.display();
    return 0;
}
