//Calculates minutes and seconds
#include <iostream>
using namespace std;

void calcRemainder(int unit1P, int ratio, int &unit2P, int &remUnit1P)
{
    unit2P = unit1P / ratio;
    remUnit1P = unit1P % ratio;
}

int main()
{
    int seconds, minutes, hours, days, weeks;
    int remSeconds, remMinutes, remHours, remDays;
    cout << "Enter the number of seconds: ";
    cin >> seconds;

    calcRemainder(seconds, 60, minutes, remSeconds);
    calcRemainder(minutes, 60, hours, remMinutes);
    calcRemainder(hours, 24, days, remHours);
    calcRemainder(days, 7, weeks, remDays);

    cout << seconds << " seconds represents" << endl
         << weeks <<  " weeks, " << remDays <<  " days, " << remHours << " hours, "
         << remMinutes <<  " minutes and " << remSeconds <<  " seconds" << endl;

    return 0;
}
