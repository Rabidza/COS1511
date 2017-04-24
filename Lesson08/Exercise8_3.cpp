#include <iostream>
using namespace std;

int main()
{
    float balance;
    cout << "Enter balance: ";
    cin >> balance;

    if (balance >= 0)
    {
        cout << "Credit";
    }
    else
    {
        cout << "Debit";
    }

    return 0;
}
