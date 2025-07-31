#include <iostream>
using namespace std;

int main() {

    int intVal = 42;
    double doubleVal = intVal; 
    

    double price = 99.99;
    int wholePrice = static_cast<int>(price); 

    char letter = 'A';
    int asciiValue = letter; 

    int totalMarks = 500;
    int subjects = 6;
    double avgMarks = static_cast<double>(totalMarks) / subjects;

    cout << "Implicit conversion (int to double): " << doubleVal << endl;
    cout << "Explicit conversion (double to int): " << wholePrice << endl;
    cout << "Implicit conversion (char to int): ASCII value of '" << letter << "' is " << asciiValue << endl;
    cout << "Explicit conversion (int to double in division): Average marks = " << avgMarks << endl;

    return 0;
}
