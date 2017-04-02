//What does it do?
#include <iostream>
using namespace std;

int main( )
{
    float a, x;
    const float TOLERANCE = 0.00001;

    cout << "Enter a floating point number greater than 1: ";
    cin >> a;

    int i = 0;
    x = a;
    while (x*x*x - a > TOLERANCE && i < 20)
    {
        cout << x << endl;
        x = (2*x + a/(x*x))/3;
        i++;
    }

    cout << "The answer is " << x << endl;

    return 0;
}
