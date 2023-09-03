#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    // the random number with the current time
    srand(time(0));

    // a random number between 1 and 100
    int usersecretNumber = rand() % 100 + 1;

    int userguess;
    int userattempts = 0;

    cout << "Welcome to my one & only Number Guessing Game!" << endl;
    cout << "I've selected a random number between 1 and 100. Try to guess it." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> userguess;

        userattempts++;

        if (userguess < usersecretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (userguess > usersecretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number (" << usersecretNumber << ") in " << userattempts << " attempts." << endl;
        }
    } while (userguess != usersecretNumber);
