#include <iostream>
using namespace std;
int main() {
    int numbers[5];
    int sum = 0;
    float average;

    for(int i = 0; i < 5; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    average = sum / 5.0;

    cout << "Sum: " << sum << "\n";
    cout << "Average: " << average;

    return 0;
}
