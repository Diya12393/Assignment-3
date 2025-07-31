#include <iostream>
using namespace std;

int globalVar = 10;

void function1() {
    int localVar = 20;
    cout << "Inside function1 - localVar: " << localVar << endl;
    cout << "Inside function1 - globalVar: " << globalVar << endl;
}

void function2() {
    int localVar = 30;
    globalVar = 50;
    cout << "Inside function2 - localVar: " << localVar << endl;
    cout << "Inside function2 - globalVar: " << globalVar << endl;
}

int main() {
    cout << "In main - globalVar: " << globalVar << endl;
    
    function1();
    function2();
    
    int localVar = 40;
    cout << "In main - localVar: " << localVar << endl;
    cout << "In main - globalVar after changes: " << globalVar << endl;
    
    return 0;
}
