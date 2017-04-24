//Return the position of the uppercase letter of the alphabet
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char letter;
    int position;

    cout << "Enter an upper case letter: ";
    cin >> letter;
    position = letter - 'A' + 1;
    cout << letter << " is in position " << position << " in the alphabet";
}
