//Illustrates setting the precision
#include <iostream>
using namespace std;

int main()
{
    float x;

    cout << "Enter a floating point number: ";
    cin >> x;

    cout.setf(ios::fixed);
    cout.precision(4);
    cout << "The number is " << x << endl;

    return 0;
}
