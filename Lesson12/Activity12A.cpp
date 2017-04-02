//Calculate the wage of a waitron
#include <iostream>
using namespace std;

int main()
{
    const float DAY_RATE = 32.50;
    const float NIGHT_RATE = 44;

    int startTime, endTime;
    float wage;

    cout << "Wage calculation" << endl;
    cout << "================" << endl;
    cout << "Starting time: ";
    cin >> startTime;
    cout << "Finishing time: ";
    cin >> endTime;

    if (startTime < 6)
        if (endTime <= 6)
        wage = (endTime - startTime) * DAY_RATE;
        else
            wage = (6 - startTime) * DAY_RATE + (endTime - 6) * NIGHT_RATE;
    else
        wage = (endTime - startTime) * NIGHT_RATE;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << endl << "The payment is R " << wage << endl;

    return 0;
}
