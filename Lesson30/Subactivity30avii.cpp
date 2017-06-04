#include <iostream>
#include <string>
using namespace std;

struct Transaction
{
    char type;
    float amount;
};

const int MAX_TRANSACT = 30;
class Account
{
    public:
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

int main()
{
    return 0;
}
