//Noise levels of cars
//This is the study guide solution, my work is in 26.a.v
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

void showData(const int noiseDataP[][NUM_SPEEDS])
{
    int speed;

    //Display headings
    for (int j = 0; j < NUM_SPEEDS; j++)
    {
        speed = 20 * (j+1);
        cout << '\t' << speed << "km/h";
    }
    cout << endl;

    //Display the data row by row
    for (int i = 0; i < NUM_CARS; i++)
    {
        cout << "Car " << i+1 << ": ";
        for (int j = 0; j < NUM_SPEEDS; j++)
            cout << '\t' << noiseDataP[i][j];
        cout << endl;
    }
}

//Calculate and display the average noise level for each car
void calcAverages(const int noiseDataP[][NUM_SPEEDS])
{
    int totalNoise;
    float average;

    //Calculate the sum and average row by row
    cout << "The average noise level for each car:" << endl;

    for (int i = 0; i < NUM_CARS; i++)
    {
        totalNoise = 0;
        cout << "Car no " << i+1 << ": ";
        for (int j = 0; j < NUM_SPEEDS; j++)
            totalNoise += noiseDataP[i][j];
        average = float(totalNoise) / NUM_SPEEDS;
        cout << average << endl;
    }
}

int main( )
{
    int noiseData[NUM_CARS][NUM_SPEEDS];

    getData(noiseData);
    showData(noiseData);
    calcAverages(noiseData);

    return 0;
}
