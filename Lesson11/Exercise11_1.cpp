#include <iostream>
using namespace std;

int main()
{
    const int FREE_UNITS = 20;
    const int RATE_0 = 10;
    const int RATE_1 = RATE_0 * 1.5;
    const int RATE_2 = RATE_0 * 2.0;

    float units, amount;

    cout << "Enter the amount of units used: ";
    cin >> units;

    if (units <= FREE_UNITS)
        amount = 0;
    if (units > FREE_UNITS && units <= 40)
        amount = (units - FREE_UNITS) * RATE_0;
    if (units > 40 && units <= 100)
        amount = (units - FREE_UNITS) * RATE_0 + (units - 40) * RATE_1;
    if (units > 100)
        amount = (units - FREE_UNITS) * RATE_0 + (units - 40) * RATE_1 + (units - 100) * RATE_2;

    cout << endl << "Amount due is R" << amount << endl;

    return 0;
}
