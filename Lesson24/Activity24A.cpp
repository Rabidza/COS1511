// Input an unspecified number of marks and
// display those greater than the average

// NOTE: This is the study guide solution
// my solution is in Subactivity24vi.cpp
#include <iostream>
using namespace std;

int main( )
{
    const int MAX_NUM = 100;
    int examMarks[MAX_NUM];
    int mark;
    int numMarks;
    int total;
    float average;
    char response;
    int i;

    total = 0;
    i = 0;
    do
    {
        cout << "Enter a mark (-1 to end): ";
        cin >> mark;
        if (mark != -1)
        {
            examMarks[i] = mark;

            total += examMarks[i];
            i++;
        }
    }while (mark != -1 && i < MAX_NUM);

    numMarks = i;

    average = float(total) / numMarks;
    cout << "The average is " << average << endl;

    cout << "The following marks were above average:" << endl;
    for (int i = 0; i < numMarks; i++)
        if (examMarks[i] > average)
            cout << examMarks[i] << endl;

    return 0;
}
