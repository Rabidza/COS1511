//Interest on an amount of money for one year
#include <iostream>
using namespace std;

int main()
{
    float amount,rate;

    cout << "Enter amount: R";
    cin >> amount;
    cout << "Enter interest rate: ";
    cin >> rate;

    amount += amount * rate / 100;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "After one year the amount is: R" << amount << endl;

    return 0;
}
