//Guess the secret number
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int myAbs(int i)
{
    if (i < 0)
        i *= -1;
    return i;
}

int main( )
{
    int secret, guess, absError;

    srand(time(0));
    secret = 1 + rand( ) % 100;

    cout << "Enter the guess: ";
    cin >> guess;

    absError = myAbs(secret - guess);
    cout << "You were out by " << absError << endl;

    return 0;
}
