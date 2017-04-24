//
#include <iostream>
using namespace std;

int main()
{
    int items, perBox, requiredBoxes, itemsLeft;

    cout << "Enter the number of items and items per box seperated by a space: ";
    cin >> items, perBox;
    requiredBoxes = items / perBox;
    itemsLeft = items % perBox;
    cout << "You require " << requiredBoxes << " boxes " << " and " << itemsLeft << " items will be left over." << endl;

    return 0;
}
