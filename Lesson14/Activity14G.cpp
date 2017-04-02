// Calculate the average of a list of integers
#include <iostream>
using namespace std;

int main( )
{
    int value, sum, many;
    float average;

    sum = 0;
    many = 0;

    cout << "Input the values you want the average of: " << endl;
    cout << "Enter any alpha charachter to quit" << endl;
    while (cin >> value)
    {
        sum += value;
        many++;
        cout << "The sum so far is " << sum << endl;
    }

    average = float(sum) / many;
    cout << "The average is " << average << endl;

    return 0;
}
