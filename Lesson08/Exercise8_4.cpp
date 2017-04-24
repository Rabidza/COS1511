#include <iostream>
using namespace std;

int main()
{
    float x,y;
    cout << "Enter values for x and y: ";
    cin >> x >> y;

    if (x == y)
        cout << "x is equal to y" << endl;
    else
        cout << "x is not equal to y" << endl;

    cout << endl;

    return 0;
}
