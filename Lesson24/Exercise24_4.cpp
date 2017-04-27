// inputs 10 floating-point numbers into an array and then assigns these values
// to a second array of the same type.
#include <iostream>
using namespace std;

int main()
{
    const int NUM_VALUES = 10;
    int array1[NUM_VALUES], array2[NUM_VALUES];

    // input values
    for (int i = 0; i < NUM_VALUES; i++)
    {
        cout << "Enter Value: ";
        cin >> array1[i];
    }

    // assign array2 to array1
    for (int i = 0; i < NUM_VALUES; i++)
        array2[i] = array1[i];

    // display both arrays beneath each other
    cout << endl;
    for (int i = 0; i < NUM_VALUES; i++)
        cout << array1[i] << " | ";

    cout << endl;
    for (int i = 0; i < NUM_VALUES; i++)
        cout << array2[i] << " | ";

    cout << endl;

    return 0;
}
