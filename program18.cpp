#include <iostream>
using namespace std;
class BankAccount {
private:
    float balance;

public:
    void deposit(float amount)
	{
		cout<<"Enter your ammount: "<<endl;
    }

    void withdraw(float amount) 
	{
		cout<<"enter your ammount: ";
    }
};

int main() {
    BankAccount account();

    account.deposit();
    account.withdraw();
}
