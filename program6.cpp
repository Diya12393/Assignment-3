#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    bool x = true, y = false;

    cout << "--- Arithmetic Operators ---" << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;
    
    cout << "\n--- Relational Operators ---" << endl;
    cout << "a == b: " <<(a == b)<< endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;

    cout << "\n--- Logical Operators ---" << endl;
    cout << "x && y: " << (x && y) << endl;
    cout << "x || y: " << (x || y) << endl;
    cout << "!x: " << !x << endl;
    
    cout << "\n--- Bitwise Operators ---" << endl;
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    
}
