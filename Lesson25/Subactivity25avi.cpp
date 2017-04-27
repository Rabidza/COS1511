//Calculates the total value of stock on hand
#include <iostream>
using namespace std;

//Display the name & price of an item, input the amount of stock,
//calculate the value and add it to the stock total

// Input the stock numbers of all items
void inputData(const string namesP[], const float pricesP[], int stockP[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << namesP[i] << ": R" << pricesP[i] << endl;
        cout << "Amount in stock: ";
        cin >> stockP[i];
    }
}

//Calculate the stock value of each item and the total value, and output a table
void calcAndOutput(const string namesP[], const float pricesP[], const int stockP[], int n)
{
    float stockVal;
    float stockTotal = 0;

    cout << endl;
    cout << "Item name\tPrice\tStock\tStock value" << endl;
    cout << "---------\t-----\t-----\t-----------" << endl;

    for (int i = 0; i < n; i++)
    {
        stockVal = pricesP[i] * stockP[i];
        cout << namesP[i] << "\tR" << pricesP[i] << "\t" << stockP[i] << "\tR" << stockVal << endl;
        stockTotal += stockVal;
    }

    cout << endl << "Total stock value: R" << stockTotal << endl;
}

int main()
{
    const int NUM_ITEMS = 7;
    string names[] = {"Plain candles", "Scented candles", "Dream-catchers", "Bead place mats",
                      "Bead coasters", "Incense holders", "Hand-painted Ms"};
    float prices[] = {8.00, 10.00, 19.00, 11.50, 5.00, 6.40, 23.50};
    int stock[NUM_ITEMS];

    //fix display value
    cout.setf(ios::fixed);
    cout.precision(2);

    inputData(names, prices, stock, NUM_ITEMS);
    calcAndOutput(names, prices, stock, NUM_ITEMS);

    return 0;
}
