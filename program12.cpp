#include <iostream>
using namespace std;
unsigned long long factorial(int n);

int main() {
    int number;
    
    cout << "Enter a positive integer to calculate its factorial: ";
    cin >> number;
    
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << number << " = " << factorial(number) << endl;
    }
    
    return 0;
}

unsigned long long factorial(int n) 
{
       if (n == 0 || n == 1) 
	{
        return 1;
    }
    else 
	{
        return n * factorial(n - 1);
    }
}
