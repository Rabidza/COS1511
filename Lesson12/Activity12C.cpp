//Determine the postal rate of a letter
#include <iostream>
using namespace std;

int main()
{
    float length, width, thickness,price;
    const float PRICE_SMALL = 2.50;
    const float PRICE_MEDIUM = 5.00;
    const float PRICE_LARGE = 6.25;

    //Get the dimensions from the user
    cout << "Enter the length of the letter: ";
    cin >> length;
    cout << "Enter the width of the letter: ";
    cin >> width;
    cout << "Enter the thickness of the letter: ";
    cin >> thickness;

    //Determine the postal rate
    if (length <= 235 && width <= 120 && thickness <= 5)
        price = PRICE_SMALL;
    else if (length <= 250 && width <= 176 && thickness <= 10)
        price = PRICE_MEDIUM;
    else if (length <= 353 && width <= 250 && thickness <= 30)
        price = PRICE_LARGE;
    else
        price = -1;

    //Output the result
    cout.setf(ios::fixed);
    cout.precision(2);

    if (price != -1)
        cout << endl << "The price of the letter is R" << price << endl;
    else
        cout << endl << "This letter must be regarded as a parcel" << endl;

    return 0;
}
