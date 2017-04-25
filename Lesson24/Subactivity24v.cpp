// Inputs an unsepecified number of marks, calculates and displays the average
// as well as the marks above the average
#include <iostream>
using namespace std;

int main()
{
    const int MAX_NUM = 100;
    float mark[MAX_NUM];
    float average;
    char another;

    int numMarks = 0;
    float total = 0;

    do
    {
        cout << "Enter a mark: ";
        cin >> mark[numMarks];
        total += mark[numMarks];
        numMarks++;

        cout << "Are there more marks? (Y/N): ";
        cin >> another;
    }while((another == 'y' || another == 'Y') && numMarks < MAX_NUM);

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
