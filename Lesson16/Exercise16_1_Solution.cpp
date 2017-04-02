//Calculates y as a function of x
#include <iostream>
using namespace std;

int main( )
{
    int startVal, endVal, x, y;

    cout << endl << endl;
    cout << "y = x*x*x - 3*x + 1" << endl << "-------------------"
         << endl;
    cout << endl << endl;
    cout << "Please enter first start value: ";
    cin >> startVal;
    cout << "Please enter first end value: ";
    cin >> endVal;
    cout << endl << endl;

    while ((startVal != 0) || (endVal != 0))
    {
        for (x = startVal; x <= endVal; x++)
        {
            y = (x*x - 3)*x + 1;
            cout << "x = " << x << "\t y = " << y << endl;
        }

        cout << endl << endl;
        cout << "Please enter next start value: ";
        cin >> startVal;
        cout << "Please enter next end value: ";
        cin >> endVal;
        cout << endl << endl;

    }
    return 0;
}
