//Calculates y as a function of x
#include <iostream>
using namespace std;

int main()
{
    int x, y, start, end;

    //Get start and end values
    cout << "Enter the start value: ";
    cin >> start;
    cout << "Enter the end value: ";
    cin >> end;

    //Determine and output x and y
    while (start != 0 || end != 0)
    {
        for (x = start; x <= end; x++)
        {
            y = (x* x * x) - (3 * x) + 1;
            cout << "For x = " << x << " y = " << y << endl;
        }

        cout << endl << "Enter another start value: ";
        cin >> start;
        cout << "Enter another end value (0 to end): ";
        cin >> end;
    }

    return 0;
}
