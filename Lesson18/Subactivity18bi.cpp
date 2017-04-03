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

    return 0;
}
