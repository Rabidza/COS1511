// Inputs a user specified number of marks, calculates and displays the average
// as well as the marks above the average

// As a note I have changed my initial answer to fit the study guide
// "Data validation"
#include <iostream>
using namespace std;

int main()
{
    const int MAX_NUM = 100;
    float mark[MAX_NUM];
    int numMarks;
    float average;

    float total = 0;

    cout << "How many marks will be entered? ";
    cin >> numMarks;

    while (numMarks < 1 || numMarks > MAX_NUM)
    {
        cout << "**Must be between 1 and " << MAX_NUM << "**" << endl;
        cout << "How many marks will be entered? ";
        cin >> numMarks;
    }

    for (int i = 0; i < numMarks; i++)
    {
        cout << "Enter mark: ";
        cin >> mark[i];
        total += mark[i];
    }

    average = total / numMarks;

    cout << endl;
    cout << "The average is: " << average << endl;
    cout << "The following exam marks were above average: " << endl;
    for (int j =0; j < numMarks; j++)
    {
        if (mark[j] > average)
            cout << mark[j] << endl;
    }

    return 0;
}
