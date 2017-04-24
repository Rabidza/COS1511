//Add vat to a user defined price
#include <iostream>
using namespace std;

const float VAT_RATE = 0.14;

void addVAT(float & priceP)
{
    priceP += priceP * VAT_RATE;
}

int main()
{
    float price;

    cout << "Enter a price: R ";
    cin >> price;

    addVAT(price);
    cout << "The price with VAT included is R" << price << endl;

    return 0;
}
