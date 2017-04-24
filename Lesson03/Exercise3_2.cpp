#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout << "Enter values for variables x, y and z:" << endl;
    cin >> x >> y >> z;
    cout << "x + y / z is " << x + y / z << endl;
    cout << "x % z is " << x % z << endl;
    cout << "y * z / x + 2 is " << y * z / x + 2 << endl;
    //cout << "y * (z / x + 2) is " << y * (z / x + 2) << endl;
    return 0;
}
