#include <iostream>

using namespace std;

void getBalance (string customerP, float & balAmnt,char & typeC, float & amtC)
{
    cout << "with &";
}
//void getBalance (string customerP, float & balAmnt,char & typeC, float amtC)
//{
//    cout << "without &";
//}

int main()
{
    string customer = "Customer1";
    float balance;
    float amount = 72.56;
    char type = 'S';

    getBalance(customer, balance, type, amount);
}
