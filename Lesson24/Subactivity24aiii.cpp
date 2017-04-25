//Calculate the average of 25 exam marks and display a list of marks greater than the average
#include <iostream>
using namespace std;

int main()
{
    const int NUM_MARKS = 25;
    float mark[NUM_MARKS];
    float average;
    float total = 0;

    for (int i = 0; i < NUM_MARKS; i++)
    {
        cout << "Enter mark: ";
        cin >> mark[i];
        total += mark[i];
    }

    average = total / NUM_MARKS;

    cout << endl;
    cout << "The average is: " << average << endl;
    cout << "The following exam marks were above average: " << endl;
    for (int j =0; j < NUM_MARKS; j++)
    {
        if (mark[j] > average)
            cout << mark[j] << endl;
    }

    return 0;
}
