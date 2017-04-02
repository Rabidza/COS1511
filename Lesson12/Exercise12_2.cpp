//Snake eyes
#include <iostream>
using namespace std;

int main()
{
    int die1, die2, result;

    //Get values of die
    cout << "Enter the two values of the die: ";
    cin >> die1 >> die2;
    result = die1 + die2;

    if (result == 12)
        cout << endl << "Good Shot!" << endl;
    else if (result == 7 || result == 11)
        cout << endl << "You won!" << endl;
    else if (result == 2)
        cout << endl << "Snake Eyes!" << endl;
    else
        cout << endl << "Try Again!" << endl;

    return 0;
}
