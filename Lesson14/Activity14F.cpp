//Inputs integers until their sum reaches a given target
#include <iostream>
using namespace std;

int main( )
{
    int sum = 0;
    int target;
    cout << "Enter the target: ";
    cin >> target;

    int value = 0;

    while (sum < target)
    {
        cout << "Enter a value: ";
        cin >> value;
        sum += value;
    }

    cout << "The last value was " << value << endl;
    if (sum == target)
        cout << "Target reached!" << endl;
    else
        cout << "Target exceeded!" << endl;

    return 0;
}
