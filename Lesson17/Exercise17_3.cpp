//Calculates and display the length of the hypotenuse
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c;

    // Get values of b and c from the usre
    cout << "Enter the values of the two short side seperated by a space: ";
    cin >> b >> c;

    //calculate and output the value of the hypotenuse
    a = sqrt(pow(b, 2) + pow(c, 2));
    cout << "The length of the hypotenuse is: " << a << endl;

    return 0;
}
