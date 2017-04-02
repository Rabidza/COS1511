//Determine a discount amount depending on user spend
#include <iostream>
using namespace std;

int main()
{
    float amount, discount, finalAmount;

    //Get spend amount
    cout << "Enter Amount: ";
    cin >> amount;

    //Determine discount
    if (amount < 50)
        discount = 0.10;
    else if (amount < 70)
        discount = 0.20;
    else if (amount < 100)
        discount = 0.30;
    else if (amount < 200)
        discount = 0.40;
    else
        discount = 0.50;

    finalAmount = amount - (amount * discount);

    //Display results
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << endl << "Amount due is R" << finalAmount << endl;

    return 0;
}
