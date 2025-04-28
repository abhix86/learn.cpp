#include <bits/stdc++.h>
using namespace std;

int main() {
    srand(time(NULL)); // Seed once at program start

    string input;
    while (true) {
        cout << "\n\nAvailable programs:\n";
        cout << "Generate random number from 1 to 6, Syntax: 'rand'\n";
        cout << "Switch through different outcomes, Syntax: 'prize'\n";
        cout << "Play guessing game, Syntax: 'game'\n";
        cout << "To exit, Syntax: 'exit'\n";

        cout << "\n\nWhat action you want to perform: ";
        getline(cin, input);

        if (input == "rand") {
            int num = (rand() % 6) + 1;
            cout << "Random Number is: " << num;
        }

        else if (input == "prize") {
            int num = (rand() % 6) + 1;
            switch (num) {
                case 1:
                    cout << "WELL, WELL, WELL, You've won the first prize, a chance to end the program and just die: " << 1;
                    break;
                case 2:
                    cout << "Just the second prize, but still die: " << 2;
                    break;
                case 3:
                    cout << "3rd but still, dieee: " << 3;
                    break;
                case 4:
                    cout << "Die already: " << 4;
                    break;
                case 5:
                    cout << "Dieeeeee: " << 5;
                    break;
                case 6:
                    cout << "Alright buddy, die: " << 6;
                    break;
            }
        }

        else if (input == "game") {
            int numberToGuess = (rand() % 100) + 1;
            int guess;
            int tries = 0;

            cout << "\n\nNumber Guess game, Initialized....\n";

            do {
                cout << "To guess, Enter the number from 1 - 100: ";
                if (!(cin >> guess)) {
                    cout << "\nYou have entered invalid input! Restarting input...\n";
                    cin.clear();               // Clear error state
                    cin.ignore(1000, '\n');     // Ignore bad input
                    continue;
                }
                tries++;
                if (guess > numberToGuess) {
                    cout << "Too high!\n";
                } else if (guess < numberToGuess) {
                    cout << "Too low!\n";
                } else {
                    cout << "CORRECT! # of tries: " << tries << "\n";
                }
            } while (guess != numberToGuess);

            cout << "\nProgram has been completed...\n\n";
            cin.ignore(); // Clear leftover newline from cin >> guess
        }

        else if (input == "exit") {
            cout << "Exiting program. Goodbye!\n";
            break;
        }

        else {
            cout << "\n\nYour input doesn't match with available programs.";
        }
    }

    return 0;
}
