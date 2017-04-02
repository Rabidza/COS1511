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

    switch (result)
    {
        case 12:
        cout << endl << "Good Shot!" << endl;
        break;
        case 7:
        case 11:
            cout << endl << "You won!" << endl;
            break;
        case 2:
            cout << endl << "Snake Eyes!" << endl;
            break;
        default:
            cout << endl << "Try Again!" << endl;
    }

    return 0;
}
