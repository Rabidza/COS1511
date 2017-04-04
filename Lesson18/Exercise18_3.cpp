//Returns the degrees Fahrenheit as well as degrees Celsius based on the amount of chirps of cricket
#include <iostream>
using namespace std;

// Returns fahrenheit temperature
float fahrenheitTemperature(float chirpsPerMinuteP)
{
    return (chirpsPerMinuteP + 160) / 4;
}

//Converts degrees Fahrenheit to degrees Celsius
float fahrenheitToCelsius(float degreesFahrenheitP)
{
    return (degreesFahrenheitP - 32) * 5 / 9;
}

int main()
{
    float chirps, degreesFahrenheit, degreesCelsius;

    cout << "Enter the number of chirps per minute: ";
    cin >> chirps;

    degreesFahrenheit = fahrenheitTemperature(chirps);
    degreesCelsius = fahrenheitToCelsius(degreesFahrenheit);

    //set precision
    cout.setf(ios::fixed);
    cout.precision(2);

    //Display Results
    cout << endl << "The approximate temperature is ";
    cout << degreesFahrenheit << " degrees F, or ";
    cout << degreesCelsius << " degrees C" << endl;


    return 0;
}
