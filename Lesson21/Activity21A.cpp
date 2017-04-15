//computes the average of three marks for two students, and displays the best average.
# include <iostream>
using namespace std;

void inputMarks(float &mark1P, float &mark2P, float &mark3P)
{
    cout << "Enter 3 marks: ";
    cin >> mark1P >> mark2P >> mark3P;
}

float average(float mark1P, float mark2P, float mark3P)
{
    return (mark1P + mark2P + mark3P) / 3.00;
}

void displayBest(float averageAP, float averageBP)
{
    float best = averageAP;
    if (averageBP > averageAP)
        best = averageBP;
    cout << "The best average is " << best << endl;
}

int main( )
{
    float mark1, mark2, mark3;
    float averageA, averageB;

    inputMarks(mark1, mark2, mark3);
    averageA = average(mark1, mark2, mark3);

    inputMarks(mark1, mark2, mark3);
    averageB = average(mark1, mark2, mark3);

    displayBest(averageA, averageB);

    return 0;
}
