#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void playGuessingGame() {
    // Initialize random seed based on current time
    srand(time(0));
    int winningNumber = rand() % 100 + 1; // Random number between 1 and 100
    int guess;

    cout << "Guess the winning number (between 1 and 100): " << endl;

    while (true) {
        // Input guess from user
        cout << "Enter your guess: ";
        cin >> guess;

        // Check guess against winning number
        if (guess < winningNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > winningNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number." << endl;
            break; // Exit the loop
        }
    }
}

int main() {
    playGuessingGame();
    return 0;
}
