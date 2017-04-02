//Calculate and display y for a series of x inputs
#include <iostream>
using namespace std;

int main()
{
    int x, y;

    //Get initial x value
    cout << "Enter a number: ";
    cin >> x;

    while (x != 0)
    {
        //Caculate y and display x and y
        y = (x * x * x) - (3 * x) + 1;
        cout << "x = " << x << " y = " << y << endl << endl;

        //Get next x value
        cout << "Enter another value for x (0 to stop): ";
        cin >> x;
    }

    return 0;
}
