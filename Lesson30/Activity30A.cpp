// Processes a banking account and displays a monthly statement
#include <iostream>
#include <string>
using namespace std;

const float DEPOSIT_FEE = 1.00;
const float BALANCE_FEE = 0.50;
const float WITHDRAWAL_FEE = 1.50;
const float OVERDRAWN_FEE = 5.00;

struct Transaction
{
    char type;
    float amount;
};

const int MAX_TRANSACT = 30;
class Account
{
    public:
        Account();
        void deposit(float a);
        float balanceEnquiry();
        void withdrawal(float a);
        void displayStatement() const;

    private:
        float balance;
        Transaction transacts[MAX_TRANSACT];
        int numTransacts;
        float feeTotal;
};

Account::Account()
{
    balance = 0;
    numTransacts = 0;
    feeTotal = 0;
}

void Account::deposit(float a)
{
    balance += a;
    feeTotal += DEPOSIT_FEE;
    balance -= DEPOSIT_FEE;
    transacts[numTransacts].type = 'D';
    transacts[numTransacts].amount = a;
    numTransacts++;
}

float Account::balanceEnquiry()
{
    feeTotal += BALANCE_FEE;
    balance -+ BALANCE_FEE;
    transacts[numTransacts].type = 'B';
    transacts[numTransacts].amount = 0;
    numTransacts++;
    return balance;
}

void Account::withdrawal(float a)
{
    balance -= a;
    if (balance > 0)
    {
        feeTotal += WITHDRAWAL_FEE;
        balance -= WITHDRAWAL_FEE;
    }
    else
    {
        feeTotal += OVERDRAWN_FEE;
        balance -= OVERDRAWN_FEE;
    }
    transacts[numTransacts].type = 'W';
    transacts[numTransacts].amount = a;
    numTransacts++;
}

void Account::displayStatement() const
{
    cout << endl << "Monthly Statement" << endl;
    cout << "=================" << endl;
    for (int i = 0; i < numTransacts; i++)
    {
        switch(transacts[i].type)
        {
            case 'D':
                cout << "Deposit\tR" << transacts[i].amount << endl;
                break;
            case 'B':
                cout << "Balance Enquiry" << endl;
                break;
            case 'W':
                cout << "Withdrawal\tR" << transacts[i].amount << endl;
                break;
            default:
                cout << "**Invalid transaction code**" << endl;
        }
    }
    cout << "Total Fee\tR" << feeTotal << endl;
    cout << "---------------------------------" << endl;
    cout << "Closing Balance\tR" << balance << endl;
}

int main()
{
    Account account1;
    char type;
    float amount;

    cout << "Enter the transactions for the month" << endl;
    cout << "(D)eposit, (B)alance Enquiry, (W)ithdrawal, E(X)it:" << endl;
    cin >> type;

    while (toupper(type) != 'X')
    {
        switch(toupper(type))
        {
            case 'D':
                cin >> amount;
                account1.deposit(amount);
                break;

            case 'B':
                account1.balanceEnquiry();
                break;

            case 'W':
                account1.withdrawal(amount);
                break;
        }
    cin >> type;
    }
    cout << endl;

    account1.displayStatement();

    return 0;
}
