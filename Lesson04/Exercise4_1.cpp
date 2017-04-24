// Convert Fahrenheit to Celcius
#include <iostream>
using namespace std;

int main()
{
    int fahrenheit, celcius;
    cout << "Enter Degress Fahrenheit: ";
    cin >> fahrenheit;
    celcius = 5* (fahrenheit - 32) / 9;
    cout << fahrenheit << " degrees Fahrenheit is equal to " << celcius << " degrees Celcius" << endl;
    return 0;
}
