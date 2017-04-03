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
    float amount, rateA, totalA, rateB, totalB;
    int termA, termB;

    //Get user input
    cout << "Enter the amount to be invested: ";
    cin >> amount;

    //Bank A
    cout << "======" << endl;
    cout << "Bank A" << endl;
    cout << "======" << endl;
    cout << "Enter the interest rate: ";
    cin >> rateA;
    cout << "How many years will the amount be invested? ";
    cin >> termA;

    // Bank B
    cout << "======" << endl;
    cout << "Bank B" << endl;
    cout << "======" << endl;
    cout << "Enter the interest rate: ";
    cin >> rateB;
    cout << "How many years will the amount be invested? ";
    cin >> termB;

    //set cout formatting
    cout.setf(ios::fixed);
    cout.precision(2);

    // calculate and display the total
    totalA = compoundInterest(amount, rateA, termA);
    totalB = compoundInterest(amount, rateB, termB);
    cout << "======" << endl;
    cout << "After " << termA << " years, " << amount << " invested at " << rateA << "% will yield R "<< totalA << endl;
    cout << "After " << termB << " years, " << amount << " invested at " << rateB << "% will yield R "<< totalB << endl;

    return 0;
}
