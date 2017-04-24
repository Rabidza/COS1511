//Read the price of 3 different products and add them together
// in addition add 14% VAT
#include <iostream>
using namespace std;

int main()
{
    const float VAT = 0.14;
    float item1, item2, item3, totalPrice;
    cout << "What are the prices of the three items? ";
    cin >> item1 >> item2 >> item3;
    totalPrice = item1 + item2 + item3;
    totalPrice = totalPrice + totalPrice * VAT;
    cout << "The total price is: " << totalPrice << endl;

}
