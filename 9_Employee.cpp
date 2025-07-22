#include <iostream>
using namespace std;

class Employee {
    int employeeID;
    string name;
    float salary;

public:
    Employee(int id, string n, float s) {
        employeeID = id;
        name = n;
        salary = s;
    }

    void display() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee e1(123, "Zara", 2500);
    e1.display();
    return 0;
}
