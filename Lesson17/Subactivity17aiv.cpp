//generates a secret random number in the range 1 to 100 and asks the user to guess what it is (just once).
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int secret, guess, difference;

    //Generate random number
    srand(time(0));
    secret = 1 + rand() % 100;

    //Get guess from user
    cout << "Enter a guess: ";
    cin >> guess;

    difference = abs(secret - guess);
    cout << "The difference is " << difference << endl;

    return 0;
}
