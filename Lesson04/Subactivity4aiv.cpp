//Convert a large number of seconds to minutes and seconds
#include <iostream>
using namespace std;

int main()
{
    int secs, totalMins, totalSecs;

    cout << "Enter a large number of seconds: ";
    cin >> secs;
    totalMins = secs / 60;
    totalSecs = secs % 60;
    cout << "This is " << totalMins << " minutes";
    cout << " and " << totalSecs << " seconds." << endl;

    return 0;
}
