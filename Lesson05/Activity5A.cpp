//Program to illustrate arithmetic operators
#include <iostream>
using namespace std;

int main()
{
    int thisOne, thatOne, thisOne2;
    const int theOther = 5;

    thisOne = 3;
    thatOne = 2 * thisOne + 7 / thisOne * theOther;
    thisOne2 = thatOne * thisOne / 9 + 8;

    cout << "thisOne = " << thisOne;
    cout << "; thatOne = " << thatOne << endl;
    cout << "thisOne2 = " << thisOne2;
    cout << "; theOther = " << theOther << endl;

    return 0;
}
