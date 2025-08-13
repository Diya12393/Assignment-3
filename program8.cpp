#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int num;
    srand(time(0)); 
    int random_num = rand() % 100 + 1; 

    cout<<"Guess the number (1-100): "<<endl;

    while (true) {
        cout<<"Enter your guess: ";
        cin>>num;

        if (num == random_num) {
            cout<<"Correct! The number was " <<random_num<<endl;
            break;
        }
        else if (num > random_num) {
            cout<<"Too high! Try again." << endl;
        }
        else {
            cout<<"Too low! Try again." << endl;
        }
    }
}
