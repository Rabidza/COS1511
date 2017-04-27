// Generate 15 random integers and store them in an array
// Had to change this to the study guides format in preperation of Activity 24B
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    const int NUM_VALS = 15;
    int values[NUM_VALS];
    int nextVal;

    srand(time(0));
    for (int i =0; i < NUM_VALS; i++)
    {
        nextVal = rand() % 1000;
        values[i] = nextVal;
    }

    cout << "The values are: " << endl;
    for (int i = 0; i < NUM_VALS; i++)
        cout << values[i] << endl;

    return 0;
}
