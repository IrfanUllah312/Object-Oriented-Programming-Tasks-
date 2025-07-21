#include <iostream>
using namespace std;

class BankAccount {
    string accountHolderName;
    float balance;

public:
    BankAccount(string name, float bal) {
        accountHolderName = name;
        balance = bal;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Deposited: $" << amount << endl;
    }

    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Insufficient funds!" << endl;
        }
    }

    void displayBalance() {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Final Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc("Ahmed", 500);
    cout << "Initial Balance: $500" << endl;
    acc.deposit(200);
    acc.withdraw(100);
    acc.displayBalance();
    return 0;
}
