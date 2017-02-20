// Convert Fahrenheit to Celcius
#include <iostream>
using namespace std;

int main()
{
    int fahrenheit;
    cout << "Enter Degress Fahrenheit: ";
    cin >> fahrenheit;
    cout << fahrenheit << " degrees Fahrenheit is equal to " << 5 * (fahrenheit - 32) / 9 << " degrees Celcius" << endl;
    return 0;
}
