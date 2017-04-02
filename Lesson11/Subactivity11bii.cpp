#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cout << "Enter two integers: ";
    cin >> x >> y;

    if (x != 0)
        if (y % x == 0)
            cout << x << " is a factor of " << y << endl;
        else
            cout << x << " is not a factor of " << y << endl;
    else
        cout << x << " is not a factor of " << y << endl;

    return 0;
}
