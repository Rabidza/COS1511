// Calculate how much money was in the account on Sipho's 18th birthday.
#include <iostream>
using namespace std;

int main()
{
    const float INTEREST = 0.045;
    const float DEPOSIT = 500.00;
    const int CONTROL_VALUE = 18;

    // initialise savings account on birthday
    float savings = 1000.00;
    int age = 0;

    //Calculate savings
    while(age < CONTROL_VALUE)
    {
        savings += savings * INTEREST;
        savings += DEPOSIT;
        age ++;
    }

    cout << "Sipho's saving account had R" << savings << " after his 18th Birthday." << endl;

    return 0;
}
