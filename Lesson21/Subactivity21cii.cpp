//Calculates minutes and seconds
#include <iostream>
using namespace std;

void calcMinutes(int secondsP, int &minutesP, int &remSecondsP)
{
    minutesP = secondsP / 60;
    remSecondsP = secondsP % 60;
}

int main()
{
    int seconds, minutes, remSeconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;

    calcMinutes(seconds, minutes, remSeconds);

    cout << seconds << " seconds represents" << endl
         << minutes <<  " minutes and " << remSeconds <<  " seconds" << endl;

    return 0;
}
