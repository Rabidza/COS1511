//Test whether a number is prime
#include <iostream>
using namespace std;

int main( )
{
    int x, y;
    bool factorFound = false;

    cout << "Enter a positive integer: ";
    cin >> y;
    x = 2;

    while (x != y && !factorFound)
    {
        //test if x is a factor of y
        if (y % x == 0)
            factorFound = true;
        x++;
    }
    if (x == y)
        cout << y << " is prime!" << endl;
    else
        cout << y << " is not prime" << endl;

    return 0;
}
