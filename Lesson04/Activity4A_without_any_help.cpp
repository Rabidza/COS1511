//Add two periods of time Minutes and Seconds
#include <iostream>
using namespace std;

int main()
{
    int minutes1, seconds1;
    int minutes2, seconds2;

    cout << "Enter period 1 (minutes seconds): ";
    cin >> minutes1 >> seconds1;
    cout << "Enter period 2 (minutes seconds): ";
    cin >> minutes2 >> seconds2;

    int totalTimeSeconds = minutes1 * 60 + minutes2 * 60 + seconds1 + seconds2;
    cout << "Total time is: " << totalTimeSeconds / 60 << " Minutes and " << totalTimeSeconds % 60 << " seconds." << endl;

    return 0;
}
