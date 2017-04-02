//Range of integers
#include <iostream>
using namespace std;

int main()
{
    int largest,    //the largest value entered
        smallest,   //the smallest value entered
        inValue,    //the value currently entered
        range;      //largest  smallest

    cout << "Enter a series of numbers (0 to stop): ";

    cin >> inValue;
    smallest = inValue;
    largest = inValue;

    //While loop to process all values until user enters 0
    while (inValue > 0 && inValue < 1001)
    {
        if (inValue > largest)
            largest = inValue;
        if (inValue < smallest)
            smallest = inValue;

        cout << "Enter value: ";
        cin >> inValue;
    } // while loop

    range = largest - smallest;
    cout << endl << "Range is " << range << endl;

    return 0;
}
