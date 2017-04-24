//Add two periods of time Minutes and Seconds
#include <iostream>
using namespace std;

int main()
{
    int mins1, mins2, secs1, secs2, totalMinutes, totalSecs;

    cout << "(Specify only minutes and seconds, separated by spaces)" << endl;
    cout << "Enter a period of time: ";
    cin >> mins1 >> secs1;
    cout << "Enter another one: ";
    cin >> mins2 >> secs2;

    totalMinutes = mins1 + mins2 + (secs1 + secs2) / 60;
    totalSecs = (secs1 + secs2) % 60;
    cout << "Total time is: " << totalMinutes << " Minutes and " << totalSecs << " seconds." << endl;

    return 0;
}
