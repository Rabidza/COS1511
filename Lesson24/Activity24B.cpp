// generates 15 random numbers (between 0 and 999) and stores them in sorted order i.e. in ascending order) in an array.
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    const int NUM_VALS = 15;
    int values[NUM_VALS];
    int nextVal;
    int current;

    srand(time(0));
    for (int i =0; i < NUM_VALS; i++)
    {
        nextVal = rand() % 1000; // % 1000 returns values between 1 and 999
        current = 0;
        while (current < i && nextVal >= values[current])
            current++;
        for (int j = i; j > current; j--)
            values[j] = values[j-1];
        values[current] = nextVal;
    }

    cout << "The values are: " << endl;
    for (int i = 0; i < NUM_VALS; i++)
        cout << values[i] << endl;

    return 0;
}
