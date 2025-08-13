#include <iostream>
using namespace std;

class Conversion {
public:
    int value = 50;
    double val = 60;
};

int main() {
    int intVal = 42;
    double doubleFromInt = intVal;
    cout << "int to double: " << intVal << "-" << conversion << endl;
    
    float floatFromInt = intVal;
    cout << "int to float: " << intVal << "-" << conversion << endl;
    
    float floatVal = 3.14159f;
    int intFromFloat =floatVal;
    cout << "float to int: " << floatVal << "-" << conversion << endl;
    
    double doubleVal = 9.87654321;
    int intFromDouble =doubleVal;
    cout << "double to int: " << doubleVal << "-" << conversion << endl;
}
