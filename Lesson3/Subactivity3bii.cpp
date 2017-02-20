//Inputs a time and a number of hours
//Calculates new time after number of hours have elapsed
#include <iostream>
using namespace std;

int main()
{
    int time, hours;
    cout << "Enter the time now (only the hours 0 ... 23): ";
    cin >> time;
    cout << "Enter a number of hours: ";
    cin >> hours;
    cout << "In " << hours << " hours the time will be ";
    cout << (time + hours) % 24 << endl;
    return 0;
}
