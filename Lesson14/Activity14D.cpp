//Determine how many years a given population will exceed 1 000 000
#include <iostream>
using namespace std;

int main()
{
    const int CONTROL_VALUE = 1000000;
    const float INCREASE_PERCENTAGE = 0.10;

    float population;
    int years = 0;

    //Get initial population
    cout << "Enter current population: ";
    cin >> population;

    while (population <= CONTROL_VALUE)
    {
        population += population * INCREASE_PERCENTAGE;
        years ++;
    }

    cout << endl << "It will take " << years << " years to exceed " << CONTROL_VALUE << endl;

    return 0;
}
