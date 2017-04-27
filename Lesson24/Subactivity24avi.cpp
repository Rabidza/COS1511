// Inputs an unsepecified number of marks, calculates and displays the average
// as well as the marks above the average
#include <iostream>
using namespace std;

int main()
{
    const int MAX_NUM = 100;
    float examMarks[MAX_NUM];
    float average;
    float mark;
    int numMarks = 0;
    float total = 0;

    do
    {
        cout << "Enter a mark (-1 to end): ";
        cin >> mark;
        if (mark != -1)
        {
            examMarks[numMarks] = mark;
            total += examMarks[numMarks];
            numMarks++;
        }

    }while(mark != -1 && numMarks < MAX_NUM);

    average = total / numMarks;

    cout << endl;
    cout << "The average is: " << average << endl;
    cout << "The following exam marks were above average: " << endl;
    for (int j =0; j < numMarks; j++)
    {
        if (examMarks[j] > average)
            cout << examMarks[j] << endl;
    }

    return 0;
}
