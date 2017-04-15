//computes the average of four marks for three students, and displays the best average.
# include <iostream>
using namespace std;

void inputMarks(float &mark1P, float &mark2P, float &mark3P, float &mark4P)
{
    cout << "Enter 4 marks: ";
    cin >> mark1P >> mark2P >> mark3P >> mark4P;
}

float average(float mark1P, float mark2P, float mark3P, float mark4P)
{
    return (mark1P + mark2P + mark3P + + mark4P) / 4.00;
}

void displayBest(float averageAP, float averageBP, float averageCP)
{
    float best = averageAP;
    if (averageBP > best)
        best = averageBP;
    if (averageCP > best)
        best = averageCP;

    cout << "The best average is " << best << endl;
}

int main( )
{
    float mark1, mark2, mark3, mark4;
    float averageA, averageB, averageC;

    inputMarks(mark1, mark2, mark3, mark4);
    averageA = average(mark1, mark2, mark3, mark4);

    inputMarks(mark1, mark2, mark3, mark4);
    averageB = average(mark1, mark2, mark3, mark4);

    inputMarks(mark1, mark2, mark3, mark4);
    averageC = average(mark1, mark2, mark3, mark4);

    displayBest(averageA, averageB, averageC);

    return 0;
}
