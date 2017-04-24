//Tests unary increment operator
#include <iostream>
using namespace std;
int main( )
{
    int m, n;
    cout << "Enter a number: ";
    cin >> n;
    m = ++n;
    cout << "m is " << m << " and n is " << n << endl;

    return 0;
}
