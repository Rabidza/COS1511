// inputs 10 floating point numbers and displays them in reverse order
#include <iostream>
using namespace std;

int main()
{
    const int MAX_VALUE = 10;
    int array[MAX_VALUE];
    int value;

    // input values
    for (int i = 0; i < MAX_VALUE; i++)
    {
        cout << "Enter value: ";
        cin >> value;
        array[i] = value;
    }

    cout << endl;
    // display values in reverse order
    for (int i = MAX_VALUE - 1; i >= 0; i--)
        cout << array[i] << " | ";

    return 0;
}
