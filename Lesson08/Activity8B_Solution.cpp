// Study Guide Solution
//Calculates discount on a price and displays a tag
#include <iostream>
using namespace std;

int main( )
{
    const float CRITICAL_VAL = 200.00;
    const int STANDARD_DISCOUNT = 10;

    int discount;
    float price, discountAmount, finalPrice;

    //Ask for and input the item's price
    cout << "Enter the price of the item: ";
    cin >> price;

    //Determine discount
    if (price >= CRITICAL_VAL)
    {
    cout << "Enter the special discount: ";
    cin >> discount;
    }
    else
    discount = STANDARD_DISCOUNT;

    //Calculate the final price by subtracting the discount
    discountAmount = price * discount / 100;
    finalPrice = price - discountAmount;

    //Display the tag
    cout << "===========" << endl;
    cout << "Was: R" << price << endl;
    cout << "Discount: " << discount << "%" << endl;
    cout << "Now: R" << finalPrice << endl;
    cout << "===========" << endl;

    return 0;
}
