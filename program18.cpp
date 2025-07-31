#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient funds" << endl;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account(1000.0);

    account.deposit(500.0);
    account.withdraw(200.0);
    account.withdraw(1500.0);

    cout << "Current balance: " << account.getBalance() << endl;

    return 0;
}
