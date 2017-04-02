//Range of integers
#include <iostream>
using namespace std;

int main()
{
    int largest,    //the largest value entered
        smallest,   //the smallest value entered
        inValue,    //the value currently entered
        range;      //largest  smallest

    cout << "Enter a series of numbers (0 to stop)" << endl;

    //While loop to process all values until user enters 0
    while (inValue != 0)
    {
        cout << "Enter value: ";
        cin >> inValue;
        if (inValue > largest)
            largest = inValue;
        else
            if (inValue < smallest)
                smallest = inValue;
    } // while loop

    range = largest - smallest;
    cout << endl << "Range is " << range << endl;

    return 0;
}
