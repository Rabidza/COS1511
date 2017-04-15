#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Please enter a number between 2 and 5 (inclusive)? ";
    cin >> number;

    while (number < 2 || number > 5)
    {
       cout << "Number is " << number << " is not between 2 and 5 (inclusive)." << endl;
       cout << "Please re-enter the number ";
       cin >> number;
    }

    cout << endl;
    cout << "You have entered a valid value " << number << endl;

    return 0;
}
