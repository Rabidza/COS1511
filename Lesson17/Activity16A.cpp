//Secret number guessing game
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int secret, guess, difference, bestGuess;

    //Generate random number
    srand(time(0));
    secret = 1 + rand() % 100;

    cout << "SPOILER ALERT: " << secret << endl << endl;

    //Explain the rules of the game
    cout << "Guess the secret number!" << endl;
    cout << "- Enter each guess." << endl;
    cout << "- When there are no more guesses, enter 0." << endl << endl;

    //Get first user input
    cout << "Enter the first guess: ";
    cin >> guess;

    bestGuess = 100;

    while(guess != 0)
    {
        difference = abs(secret - guess);
        if (difference < bestGuess)
        {
            cout << "This is the best guess so far." << endl;
            bestGuess = difference;
        }

        //Get next guess
        cout << endl << "Enter the next guess: ";
        cin >> guess;
    }

    cout << endl << "The secret number was " << secret << endl
         << "The best guess was " << guess << endl;

    return 0;
}
