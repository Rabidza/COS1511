// This program finds the average time spent programming by a student
// each day over a three day period.
#include <iostream>
using namespace std;

int main()
{
    int numStudents, n;
    float numHoursProgramming, numHoursBiology, totalProgramming, totalBiology, averageProgramming, averageBiology;
    int student, day = 0;       // these are the counters for the loops

    cout << "This program will find the average number of hours a day"
         << " that a student spent studying biology and programming over a long weekend\n\n";
    cout << "How many students are there? " << endl;
    cin >> numStudents;
    cout << "Enter the number of days in the long weekend" << endl;
    cin >> n;

    for (student = 1; student <= numStudents; student++)
    {
        totalProgramming = 0;
        totalBiology = 0;
        for (day = 1; day <= n; day++)
        {
            cout << "Please enter the number of hours programming by the student "
                 << student << " on day " << day << "." << endl;
            cin >> numHoursProgramming;

            cout << "Please enter the number of hours studying biology by the student "
                 << student << " on day " << day << "." << endl;
            cin >> numHoursBiology;

            totalProgramming = totalProgramming + numHoursProgramming;
            totalBiology = totalBiology + numHoursBiology;
        }

        averageProgramming = totalProgramming / n;
        averageBiology = totalBiology / n;

        cout << endl;
        cout << "The average number of hours per day spent programming "
             << "by student " << student << " is " << averageProgramming
             << endl;

        cout << endl;
        cout << "The average number of hours per day spent studying biology "
             << "by student " << student << " is " << averageBiology
             << endl;

        cout << endl;

        if (averageProgramming == averageBiology)
            cout << "The student spent on average the same amount of time on programming and biology" << endl;
        else if (averageProgramming > averageBiology)
            cout << "The student spent on average more time on programming than biology." << endl;
        else
            cout << "The student spent on average more time on biology than programming." << endl;

        cout << endl;

    }
    return 0;
}
