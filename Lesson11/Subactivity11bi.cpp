#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cout << "Enter two integers: ";
    cin >> x >> y;

    if (y % x == 0)
        cout << endl << x << " is a factor of " << y << endl;
    else
        cout << endl << x << " is not a factor of " << y << endl;

    return 0;
}
