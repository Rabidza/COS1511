// Noise levels of cars
#include <iostream>
using namespace std;

const int NUM_CARS = 1;
const int NUM_SPEEDS = 2;

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

void displayData(const int noiseDataP[][NUM_SPEEDS])
{
    int speed;

    cout << endl;
    // Display headings
    for(int j = 0; j < NUM_SPEEDS; j++)
    {
        speed = 20 * (j + 1);
        cout << "\t" << speed << "km/h";
    }
    cout << endl;

    // Display the data row by row
    for (int i = 0; i < NUM_CARS; i++)
    {
        cout << "Car " << i + 1 << ": ";
        for (int j = 0; j < NUM_SPEEDS; j++)
            cout << "\t" << noiseDataP[i][j];
        cout << endl;
    }
}

void calcAverages(const int noiseDataP[][NUM_SPEEDS])
{
    int total;
    float average;

    cout << endl << "The average noise level for each car:" << endl;

    for (int i = 0; i < NUM_CARS; i++)
    {
        total = 0;
        cout << "Car " << i + 1 << ": ";
        for (int j = 0; j < NUM_SPEEDS; j++)
            total += noiseDataP[i][j];

        average = total / NUM_SPEEDS;
        cout << average << endl;
    }
}

int main( )
{
    int noiseData[NUM_CARS][NUM_SPEEDS];

    getData(noiseData);
    displayData(noiseData);
    calcAverages(noiseData);

    return 0;
}
