// A program to display when the total mass exceeds the maximum load that the airplane can take
#include <iostream>
using namespace std;

int main()
{
    float MAX_MASS = 10000;
    float itemWeight, total;

    // Initialise the first item as well as the total;
    cout << "Enter the weight of the first item: ";
    cin >> itemWeight;
    total += itemWeight;

    // Get the rest of the items' mass and add to total
    while (itemWeight != 0)
    {
        cout << "Enter the weight of the next item: ";
        cin >> itemWeight;
        total += itemWeight;
    }

    if (total > 10000)
        cout << endl << "The plane has been loaded beyond capacity." << endl;
    else
        cout << endl << "The plane still has capacity left." << endl;

    return 0;
}
