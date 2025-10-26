#include <iostream>
using namespace std;

class BankAccount {
    string name;
    int accNo;
    double balance;
public:
    BankAccount(string n, int a, double b) {
        name = n;
        accNo = a;
        balance = (b >= 0) ? b : 0;
        if (b < 0) cout << "Balance cannot be negative.\n";
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else
            cout << "Invalid deposit amount.\n";
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else
            cout << "Insufficient balance.\n";
    }

    void display() {
        cout << "\nAccount Details:\n";
        cout << "Name: " << name << endl;
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc("Karthik", 123456789, 5000);
    acc.display();
    acc.deposit(2000);
    acc.withdraw(1000);
    acc.withdraw(7000);
    acc.display();
    return 0;
}
