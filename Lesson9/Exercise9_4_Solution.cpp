//Can all the luggage be loaded on the airplane?
#include <iostream>
using namespace std;
int main( )
{
    const int MAX_MASS = 10000;
    int mass, totalMass;
    totalMass = 0;

    cout << "Please enter mass of first piece of luggage (0 to stop): ";
    cin >> mass;

    while (mass != 0)
    {
        totalMass += mass;
        cout << "Please enter mass of next piece of luggage (0 to stop): ";
        cin >> mass;
    }
    if (totalMass > MAX_MASS)
        cout << totalMass << "kg exceeds the permissible maximum load." << endl;
    else
        cout << totalMass << "kg is fine." << endl;

    return 0;
}
