//Guess the secret number
#include <iostream>
using namespace std;

int main()
{
    const int SECRET = 23;
    const int CHANCES = 10;
    int guess;
    int attempt = 0;
    bool found = false;

    while (!found && attempt < CHANCES )
    {
        cout << "Guess a number between 1 and 100: ";
        cin >> guess;
        attempt++;

        if (guess == SECRET)
            found = true;
    }
    if (found)
        cout << endl << "Well done! You got the number in " << attempt << " guesses." << endl;
    else
        cout << endl << "Tough luck! Your 10 guesses are over." << endl;

    //Well done! You got the number in 7 guesses.
    //Tough luck! Your 10 chances are over.

    return 0;
}
