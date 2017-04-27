// Inputs and stores data in the array
#include <iostream>
using namespace std;

int main()
{
    const int NUM_CARS = 5;
    const int NUM_SPEEDS = 6;
    int noiseData[NUM_CARS][NUM_SPEEDS];

    for (int i = 0; i < NUM_CARS; i++)
    {
        cout << "Enter " <<  NUM_SPEEDS " noise levels for car no " << i + 1 << endl;
        for (int j = 0; j < NUM_SPEEDS; j++)
        {
            int speed = 20 * (j + 1);
            cout << "At " << speed << "km/h: ";
            cin >> noiseData[i][j];
        }
    }

    return 0;
}

