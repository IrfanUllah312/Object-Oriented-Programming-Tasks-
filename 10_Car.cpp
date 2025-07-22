#include <iostream>
using namespace std;

class Car {
    string brand;
    int modelYear;

public:
    Car() {
        brand = "Unknown";
        modelYear = 0;
    }

    Car(string b, int y) {
        brand = b;
        modelYear = y;
    }

    void display() {
        cout << "Brand: " << brand << ", Year: " << modelYear << endl;
    }
};

int main() {
    cout << "Car 1 (default constructor):" << endl;
    Car car1;
    car1.display();

    cout << "Car 2 (parameterized constructor):" << endl;
    Car car2("Honda", 2022);
    car2.display();

    return 0;
}
