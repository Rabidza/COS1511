#include <iostream>
#include <string>
using namespace std;

const int MAX_TRANSACT = 30;
const int DEPOSIT_FEE = 1;

struct Transaction
{
    char type;
    float amount;
};

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


int main()
{
    return 0;
}
