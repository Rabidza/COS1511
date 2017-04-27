// Noise levels of cars
#include <iostream>
using namespace std;

const int NUM_CARS = 5;
const int NUM_SPEEDS = 6;

void getData(int noiseDataP[][NUM_SPEEDS])
{
    int speed;
    for (int i = 0; i < NUM_CARS; i++)
    {
        cout << "Enter " << NUM_SPEEDS << " noise levels for car no " << i+1 << endl;
        for (int j = 0; j < NUM_SPEEDS; j++)
        {
            speed = 20 * (j+1);
            cout << "At " << speed << "km/h: ";
            cin >> noiseDataP[i][j];
        }
    }
}

int main( )
{
    int noiseData[NUM_CARS][NUM_SPEEDS];

    getData(noiseData);

    return 0;
}
