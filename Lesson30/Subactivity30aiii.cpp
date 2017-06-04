#include <iostream>
#include <string>
using namespace std;

struct Transaction
{
    char type;
    float amount;
};

const int MAX_TRANSACT = 30;
struct Account
{
    float balance;
    Transaction transacts[MAX_TRANSACT];
    int numTransacts;
    float feeTotal;
};

int main()
{
    return 0;
}
