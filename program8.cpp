#include <iostream>

int main() {
    int secretNumber = 42;
    int guess;
    int attempts = 0;

    std::cout << "I'm thinking of a number between 1 and 100.\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            std::cout << "Too low! ";
        } else if (guess > secretNumber) {
            std::cout << "Too high! ";
        }
    } while (guess != secretNumber);

    std::cout << "Correct! You guessed it in " << attempts << " tries.\n";

    return 0;
}
