#include <iostream>
using namespace std;

class Calculator {
    float num1, num2;

public:
    Calculator(float a, float b) {
        num1 = a;
        num2 = b;
    }

    float add() { return num1 + num2; }
    float subtract() { return num1 - num2; }
    float multiply() { return num1 * num2; }
    float divide() { return num2 != 0 ? num1 / num2 : 0; }

    void displayResults() {
        cout << "Numbers: " << num1 << " and " << num2 << endl;
        cout << "Addition: " << add() << endl;
        cout << "Subtraction: " << subtract() << endl;
        cout << "Multiplication: " << multiply() << endl;
        cout << "Division: " << divide() << endl;
    }
};

int main() {
    Calculator c1(10, 5);
    c1.displayResults();
    return 0;
}
