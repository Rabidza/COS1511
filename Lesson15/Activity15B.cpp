//Determines whether a year is a leap year
#include <iostream>
using namespace std;

int main()
{
    int year, numYears;

    //Get user input
    cout << "What year do you want to start with? ";
    cin >> year;
    cout << "How many years do you want to check? ";
    cin >> numYears;

    for(int i = year; i < year + numYears; i++)
    {
        if(i % 4 == 0)
            cout << i << " is a leap year" << endl;
        else
            cout << i << " isn't a leap year." << endl;
    }

    return 0;
}


/*
(In fact, the above rule for determining whether a year is a leap year is an over-simplification. Years that
are multiples of 100 but not multiples of 400 are not leap years. For the purposes of this program, we use
the simple rule, however.)
*/
