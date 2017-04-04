#include <iostream>
using namespace std;

void displayRow(int n, char c)
{
    for(int i = 0; i < n; i++)
        cout << c;
    cout << endl;
}

int main()
{
    int sum, value, numValue;
    float average;

    cout << "Enter the values (negative to end): " << endl;
    cin >> value;
    sum = 0;
    numValue = 0;

    while(value >= 0)
    {
        sum += value;
        numValue++;
        displayRow(value, '*');
        cin >> value;
    }

    average = sum / numValue;
    cout << "The average is " << average << endl;
    displayRow(average, '+');


    return 0;
}
