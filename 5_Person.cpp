#include <iostream>
using namespace std;

class Person {
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void checkAdult() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Status: " << (age >= 18 ? "Adult" : "Not Adult") << endl;
    }
};

int main() {
    Person p1("Sara", 20);
    p1.checkAdult();
    return 0;
}
