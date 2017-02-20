//Add two periods of time in minutes and seconds
#include <iostream>
using namespace std;

int main()
{
    int mins1, secs1, mins2, secs2, totalMins;

    cout << "(Specify only minutes and seconds, seperated by spaces)" << endl;
    cout << "Enter a period of time: ";
    cin >> mins1 >> secs1;
    cout << "Enter another one: ";
    cin >> mins2 >> secs2;
    totalMins = mins1 + mins2;
    cout << "The total time is " << totalMins << " minutes and " << secs1 + secs2 << " seconds" << endl;
    return 0;
}
