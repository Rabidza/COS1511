//Maintains a cheque account
#include <iostream>
using namespace std;

int main()
{
    float balance, transaction;

    cout << "Enter your current balance: R";
    cin >> balance;
    cout << "Enter a sequence of numbers seperated by the <ENTER> key" << endl;
    cout << "Enter 0 to end" << endl;
    cin >> transaction;
    balance += transaction;

    while (transaction != 0)
    {
        cout << "The balance of the account is now: R" << balance << endl;
        cin >> transaction;
        balance += transaction;
    }

    return 0;
}
