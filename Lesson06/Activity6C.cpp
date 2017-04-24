//Read the price of 3 different products and add them together
// in addition add 14% VAT
#include <iostream>
using namespace std;

int main()
{
    const float VAT = 0.14;
    float item1, item2, item3, totalPrice;

    //Input 3 prices
    cout << "What are the prices of the three items? ";
    cin >> item1 >> item2 >> item3;

    //Calculate the total including vat
    totalPrice = item1 + item2 + item3;
    totalPrice = totalPrice + totalPrice * VAT;

    //Output the total including VAT
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "The total price is R: " << totalPrice << endl;

    return 0;
}
