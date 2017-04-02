//Determine whether a year is a leap year
#include <iostream>
using namespace std;

int main()
{
    int year;
    bool leap = false;

    //Get the year from the user
    cout << "Enter a year: ";
    cin >> year;

    if (year % 100 == 0)
        {
            if (year % 400 == 0)
            leap = true;
        }
    else if (year % 4 == 0)
        leap = true;

    if (leap)
        cout << endl << year << " is a leap year." << endl;
    else
        cout << endl << year << " is not a leap year." << endl;

    return 0;
}
