// Ask for a number between 10 and 20 and ensure that this is the only valid range
#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number between 10 and 20: ";
    cin >> number;

    while (number < 10 || number > 20)
    {
        cout << "Enter a number between 10 and 20: ";
        cin >> number;
    }

    cout << endl << "You entered: " << number;

    return 0;
}
