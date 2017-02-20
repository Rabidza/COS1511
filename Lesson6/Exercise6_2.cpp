//Calculate the total price of a wall-to-wall carpet
#include <iostream>
using namespace std;

int main()
{
    const float PRICE = 59.50;
    float width, length, area, totalPrice;

    //Ask for and assign width and length
    cout << "Insert length and width in meters: ";
    cin >> width >> length;

    //Calculate Area and totalPrice
    area = width * length;
    totalPrice = area * PRICE;


    //Output area with a fixed precision of 3 decimals
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "The total price of the carpet is: R" << totalPrice <<endl;

    return 0;
}
