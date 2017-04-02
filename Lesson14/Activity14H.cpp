//Calculates the number of digits in a number
#include <iostream>
using namespace std;

int main()
{
    const int DIVIDER = 10;
    int number, num;
    int counter = 0;

    //Get integer from user
    cout << "Enter an integer: ";
    cin >> number;
    num = number;

    do
    {
        counter ++;
        num /= DIVIDER;
    } while (num != 0);

    cout << endl << "The integer " << number << " has " << counter << " digit(s)." << endl;

    return 0;
}
