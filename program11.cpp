#include <iostream>
using namespace std;
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() 
{
    double num1, num2;
    char operation;

    cout<<"Simple Calculator Program\n";
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"Choose operation (+, -, *, /): ";
    cin>>operation;

    switch(operation) 
	{
        case '+':
            cout<<"Result: "<<add(num1,num2)<<endl;
            break;
        case '-':
            cout<<"Result: "<<subtract(num1,num2)<<endl;
            break;
        case '*':
            cout<<"Result: "<<multiply(num1,num2)<<endl;
            break;
        case '/':
            if(num2 != 0) {
                cout<<"Result: "<<divide(num1,num2)<<endl;
            } else {
                cout<<"Error: Division by zero!"<<endl;
            }
            break;
        default:
            cout<<"Invalid operation!"<<endl;
    }
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}
