//Calculate kilometers per liter and litres per 100 kilometers
#include <iostream>
using namespace std;

int main()
{
    float kilometers, liters, kmPerLiter, litersPer100km;
    //get values
    cout << "Enter number of kilometers travelled: ";
    cin >> kilometers;
    cout << "Enter number of liters bought: ";
    cin >> liters;

    //calculate
    kmPerLiter = kilometers / liters;
    litersPer100km = liters / (kilometers / 100);

    //output values
    cout << "kms" << '\t' << "liters" << '\t' << "km/l" << '\t' << "l/100km" << endl;
    cout << kilometers << '\t' << liters << '\t' << kmPerLiter << '\t' << litersPer100km
     << endl;
}
