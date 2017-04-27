//Sorts an array of 15 random integers  (version 2)
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main( )
{
    const int NUM_VALS = 15;       // number of values to be generated and sorted
    int values[NUM_VALS];

    int nextVal, current;

    srand(time(0));

    for (int i = 0; i < NUM_VALS; i++)
    {
        nextVal = rand( ) % 1000;       // generates 'new value'
        current = i - 1;                // index of last value already sorted
        // compares 'new value' with all values that are already sorted,
        // starting at the last value so far and
        // shifting every value larger than 'new value' one position to the right

        while ((current >= 0) && (values[current] > nextVal))
        {
            values[current+1] = values[current];
            current--;
        }

        values[current + 1] = nextVal;      // inserts 'new value' at correct

        // position
        cout << "After the " << i+1 << "th value has been generated, "
        << "the sorted array looks as follows:" << endl;

        for (int j = 0; j <= i; j++)
        cout << values[j] << ' ';
        cout << endl;
    }

    cout << endl << endl << "The final sorted array:" << endl;
    for (int i = 0; i < NUM_VALS; i++)
        cout << values[i] << "  ";
    cout << endl << endl;

    return 0;

}
