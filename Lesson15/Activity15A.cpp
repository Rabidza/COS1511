#include <iostream>
using namespace std;

int main()
{
    float balance, rate;
    int years;

    cout << "Enter amount: R";
    cin >> balance;
    cout << "Enter the interest rate %: ";
    cin >> rate;
    cout << "Enter the number of years to invest: ";
    cin >> years;

    cout.setf(ios::fixed);
    cout.precision(2);

    for (int counter = 1; counter <= years; counter++)
    {
        balance += balance * rate / 100;
        cout << "After " << counter << " years the amount will be " << balance << endl;
    }

    return 0;
}
