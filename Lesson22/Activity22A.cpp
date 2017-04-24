//Calculates the total value of stock on hand
#include <iostream>
using namespace std;

//Display the name & price of an item, input the amount of stock,
//calculate the value and add it to the stock total
void inputAndCalc(string nameP, float priceP, float & stockTotalP)
{
    int stock;
    float stockVal;

    cout << nameP << " : R " << priceP << endl;
    cout << "Stock: ";
    cin >> stock;

    stockVal = stock * priceP;
    stockTotalP += stockVal;
}

int main()
{
    float stockTotal;

    //fix display value
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Enter the stock of each item: ";
    inputAndCalc("Plain Candles", 8.00, stockTotal);
    inputAndCalc("Scented Candles", 10.00, stockTotal);
    inputAndCalc("Square Candles", 12.50, stockTotal);
    inputAndCalc("Round Candles", 15.00, stockTotal);
    inputAndCalc("Incense Candles", 17.45, stockTotal);
    inputAndCalc("Mosquito Candles", 22.25, stockTotal);
    inputAndCalc("Hand-Painted Ms", 23.50, stockTotal);

    cout << "The total value of the stock is: R " << stockTotal << endl;

    return 0;
}
