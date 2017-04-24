//Next letter in alphabetic order
#include <iostream>
using namespace std;

int main()
{
    char letter, next;

    cout << "Enter a letter of the alphabet: ";
    cin >> letter;

    next = letter + 1;
    cout << "The next letter is " << next << endl;

    return 0;
}
