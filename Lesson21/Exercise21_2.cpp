//Display a histogram for a series of values
#include <iostream>
using namespace std;

void inputAndValidate(int & valueP)
{
    cin >> valueP;
    if (valueP > 80)
        do
        {
        cout << "Value cannot be more than 80. Enter again: ";
        cin >> valueP;
        }  while (valueP > 80);
}

void displayRow(int n, char c)
{
    for (int i = 1; i <= n; i++)
    cout << c;
    cout << endl;
}

int main( )
{
    int value, total, many, averageInt;
    float average;

    total = 0;
    many = 0;

    cout << "Enter the values (negative to end):" << endl;
    inputAndValidate(value);

    while (value >= 0)
    {
        total += value;
        many++;
        displayRow(value, '*');
        inputAndValidate(value);
    }

    if (many > 0)
    {
        average = float(total)/many;
        cout << "The average is " << average << endl;
        averageInt = int(average + 0.5);
        displayRow(averageInt, '+');
    }
    else
        cout << "There were no values entered." << endl;

    return 0;
}
