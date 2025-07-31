#include <iostream>
using namespace std;
int main() {
    
    const float PI = 3.14159;
    const int MAX_SCORE = 100;

    int age = 25;
    float height = 5.9;
    double distance = 12345.6789;
    char grade = 'A';
    bool isPassed = true;

    age += 5; 
    height *= 2; 
    distance /= 2; 
    isPassed = !isPassed; 
    
    cout << "Age after 5 years: " << age << endl;
    cout << "Height doubled: " << height << " feet" << endl;
    cout << "Half the distance: " << distance << " km" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed status: " << (isPassed ? "Yes" : "No") << endl;
    cout << "Constant PI: " << PI << endl;
    cout << "Maximum Score allowed: " << MAX_SCORE << endl;

    return 0;
}
