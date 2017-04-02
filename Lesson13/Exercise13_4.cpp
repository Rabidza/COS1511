//Display the number of days in any given month and year
#include <iostream>
using namespace std;

int main()
{
    int month, year, days;

    //Get month and year
    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter the month (1 - 12): ";
    cin >> month;

    //Switch statement to determine days
    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        case 2:
            if (year % 100 == 0)
            {
                if (year % 400 == 0)
                days = 29;
            }
            else if (year % 4 == 0)
                days = 29;
            else
                days = 28;
            break;
        default:
            cout << "Incorrect Input. Month can only be between 1 and 12." << endl;
            days = 0;
    }
    //Display Result
    cout << endl << "The " << month << " month of " << year << " has " <<days << " days" << endl;

    return 0;
}
