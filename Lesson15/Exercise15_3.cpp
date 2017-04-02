//Displays ASCII values of all the upper-case letters of the alphabet.
#include <iostream>
using namespace std;

int main()
{
    const char MAX = 'Z';
    const char MIN = 'A';
    int ascii;

    for (char c = MIN; c <= MAX; c++)
    {
            ascii = c;
            cout << c << " has ASCII number " << ascii << endl;
    }

    return 0;
}
