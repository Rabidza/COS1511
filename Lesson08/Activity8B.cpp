// Calculate Tax on a salary
#include <iostream>
using namespace std;

int main()
{
    const float CRITICAL_VAL = 200;
    float old_Price, new_Price;
    float discount = 10;

    //Ask the user for the price
    cout << "Enter old price: ";
    cin >> old_Price;

    if (old_Price >= CRITICAL_VAL)
    {
        cout << "Enter special discount %:";
        cin >> discount;
    }

    new_Price = old_Price - (old_Price * discount / 100);

    cout << endl;
    //Print the results to the console
    cout << "===========" << endl;
    cout << "Was: R" << old_Price << endl;
    cout << "Discount: " << discount << "%" << endl;
    cout << "Now: R" << new_Price << endl;
    cout << "===========" << endl;

    return 0;
}
