//Calculates VAT on the a sum of an unknown number of values
#include <iostream>
using namespace std;

int main( )
{
    const float VAT_RATE = 0.14;
    float price, vat, total, vatIncl;

    // Initiliase price and total
    cout << "Enter the price of the item: ";
    cin >> price;
    total = price;

    // Get and add rest of the prices
    while (price != 0.00)
    {
        cout << "Enter the price of the item: ";
        cin >> price;
        total += price;
    }

    //Calculate and display the total including VAT
    vat = total * VAT_RATE;
    vatIncl = total + vat;
    cout << endl;
    cout << "The total price is " << vatIncl << endl;

    return 0;
}
