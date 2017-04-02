//Displays a times table for any given number
#include <iostream>
using namespace std;

int main()
{
    int x, result;

    cout << "Enter a number: ";
    cin >> x;
    cout << "The " << x << " times table is:" << endl;

    for (int i = 1; i <= 12; i++)
    {
        result = x * i;
        cout << x << " x " << i << " = " << result << endl;
    }

    return 0;
}
