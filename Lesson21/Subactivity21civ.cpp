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
    int seconds, minutes;
    int remSeconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;

    calcRemainder(seconds, 60, minutes, remSeconds);

    cout << seconds << " seconds represents" << endl
         << minutes <<  " minutes and " << remSeconds <<  " seconds" << endl;

    return 0;
}
