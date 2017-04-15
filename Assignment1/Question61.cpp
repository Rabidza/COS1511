#include <iostream>
using namespace std;

int main()
{
    char letter = ' ';
    cout << "Enter a letter: ";
    cin >> letter;

    //Option 3
    if ((letter == 'x') || (letter == 'X'))
        cout << "The letter entered ws either x or X" << endl;

    return 0;
}
