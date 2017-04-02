//Determines which of a sequence of years are leap years
#include <iostream>
using namespace std;
int main( )
{
    int start, many;
    cout << "What year do you want to start with? ";
    cin >> start;
    cout << "How many years do you want check? ";
    cin >> many;

    for (int i = start; i < start + many; i++)
    {
        if (i % 4 == 0)
            cout << i << " is a leap year" << endl;
        else
            cout << i << " isn't a leap year" << endl;
    }
    return 0;
}
