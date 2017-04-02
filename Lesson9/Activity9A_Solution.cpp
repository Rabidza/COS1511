//Adds VAT to the total of an unknown number of prices
#include <iostream>
using namespace std;

int main( )
{
    const float VAT_RATE = 0.14;
    float price, total, vat, vatIncl;

    //Initialise price and total
    cout << "Enter the price of the first item: ";
    cin >> price;
    total = price;

    //Input the rest of the prices and add to total
    while (price != 0.0)
{
    cout << "Enter the next price: ";
    cin >> price;
    total += price;
}
    //Calculate and display the total including VAT
    vat = total * VAT_RATE;
    vatIncl = total + vat;
    cout << endl << "The total price is " << vatIncl << endl;
    return 0;
}
