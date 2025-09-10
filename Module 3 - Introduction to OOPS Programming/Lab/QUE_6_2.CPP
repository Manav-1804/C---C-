#include <iostream.h>
#include <conio.h>

class BankAccount {
private:
    float balance;   // private data member

public:
    // constructor
    BankAccount() {
        balance = 0;
    }

    // deposit function
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "\nAmount Deposited: " << amount;
        } else {
            cout << "\nInvalid deposit amount!";
        }
    }

    // withdraw function
    void withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "\nAmount Withdrawn: " << amount;
        } else {
            cout << "\nInsufficient Balance or Invalid Amount!";
        }
    }

    // display balance
    void showBalance() {
        cout << "\nCurrent Balance: " << balance;
    }
};

void main() {
    clrscr();

    BankAccount acc;
    acc.deposit(1000);
    acc.showBalance();
    acc.withdraw(400);
    acc.showBalance();
    acc.withdraw(700);

    getch();
}
