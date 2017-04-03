//Calculates compound interest on an investment amount
#include <iostream>
#include <cmath>
using namespace std;

//Returns compound interest
float compoundInterest(float amountP, float rateP, int termP)
{
    return amountP * pow((1 + rateP / 100), termP);
}

int main()
{
    float amount, rate, total;
    int term;

    //Get user input
    cout << "Enter the amount to be invested: ";
    cin >> amount;
    cout << "Enter the interest rate: ";
    cin >> rate;
    cout << "How many years will the amount be invested? ";
    cin >> term;

    //set cout formatting
    cout.setf(ios::fixed);
    cout.precision(2);

    // calculate and display the total
    total = compoundInterest(amount, rate, term);
    cout << "After " << term << " years, " << amount << " invested at " << rate << "% will yield R "<< total << endl;

    return 0;
}
