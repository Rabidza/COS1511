//Sipho's money
#include <iostream>
using namespace std;
int main( )
{
    const float INTEREST = 0.045;
    const float START_AMOUNT = 1000.00;
    const float SAVE_AMOUNT = 500.00;
    const int NUM_YEARS = 18;
    float balance;
    int year;

    //Set the initial values
    balance = START_AMOUNT;
    year = 1;

    //Calculate the accumulation for numYear years
    while (year <= NUM_YEARS)
    {
        balance += balance * INTEREST;
        balance += SAVE_AMOUNT;
        year++;

    }
    //Display the balance after NUM_YEARS years
    cout << "The final balance is R" << balance << endl;

    return 0;
}
