#include <iostream>
#include <cmath>
using namespace std;

int calculateCarpetSize(float lengthP, float widthP)
{
    return ceil(lengthP) * ceil(widthP);
}

float calculateCarpetCost(float roomSizeP, float sellingPriceP)
{
    return roomSizeP * sellingPriceP;
}

float calculateLabourCost(float roomLabourP)
{
    return roomLabourP * 24.00;
}

bool qualifyForDiscount(string customerNumberP)
{
    if (customerNumberP[0] == '0')
        return true;
    return false;
}

float computeDiscount(int grossCostP)
{
    float discount;

    cout << "Enter the discount percentage: ";
    cin >> discount;

    return grossCostP * discount / 100;
}

void printCustomerStatement(string customerP, string customerNoP, float carpetCostP, float labourCostP, float discountP)
{
    const float TAX = 0.14;
    float subtotal, subLessDiscount, subTax, total;

    //set the precision for floating values
    cout.setf(ios::fixed);
    cout.precision(2);

    subtotal = carpetCostP + labourCostP;
    subLessDiscount = subtotal - discountP;
    subTax = (carpetCostP - discountP) * TAX;
    total = subLessDiscount + subTax;

    cout << endl << endl;
    cout << "\t\tCROSSWELL CARPET STORE\n"
         << "\t\t\tSTATEMENT\n"
         << "\t     Customer Name  :  " << customerP << endl
         << "\t   Customer Number  :  " << customerNoP << endl << endl
         << "\t      Carpet Price  :  " << carpetCostP << endl
         << "\t            Labour  :  " << labourCostP << endl << endl
         << "\t          Subtotal  :  " << subtotal << endl
         << "\t     Less Discount  :  " << discountP << endl << endl
         << "\t          Subtotal  :  " << subLessDiscount << endl
         << "\t          Plus Tax  :  " << subTax << endl
         << "\t             Total  :  " << total << endl << endl << endl;
}

int main()
{
    string customerName, customerNumber;
    int roomSize;
    float length, width, carpetCost, sellingPrice, labourCost,discount;

    cout << "Enter the name of the customer: ";
    getline(cin, customerName, '\n');
    cout << "Enter the customer number: ";
    cin >> customerNumber;
    cout << "Enter the cost of the carpet per square meter: ";
    cin >> sellingPrice;

    cout << "Enter the length of the room: ";
    cin >> length;
    cout << "Enter the width of the room: ";
    cin >> width;

    roomSize = calculateCarpetSize(length,width);
    labourCost = calculateLabourCost(roomSize);
    carpetCost = calculateCarpetCost(roomSize, sellingPrice);
    if (qualifyForDiscount(customerNumber))
        discount = computeDiscount((labourCost + carpetCost));
    else
        discount = 0;

    printCustomerStatement(customerName, customerNumber, carpetCost, labourCost, discount);

    return 0;
}
