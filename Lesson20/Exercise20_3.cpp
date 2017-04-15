//Display a histogram for a series of values
#include <iostream>
using namespace std;
void displayRow(int n, char c)
{
    for (int i = 1; i <= n; i++)
        cout << c;
    cout << endl;
}
int main( )
{
    //TODO: change average to a floating point value
    int value, total, many, average;
    total = 0;
    many = 0;

    //TODO: Prevent user from entering incorrect values

    cout << "Enter the values (negative to end):" << endl;
    cin >> value;
    while (value > 0)
    {
        total += value;
        many++;
        displayRow(value, '*');
        cin >> value;
    }

    //TODO: Apply rounding to the floating point average before calling displayRow to display the appropriate number of plus signs.
    average = total/many;
    cout << "The average is " << average << endl;
    displayRow(average, '+');

    return 0;
}
