////Determines the maximum of three values
#include <iostream>
using namespace std;

//returns the max value of 2 numbers
float max2(float x, float y)
{
    if (x > y)
        return x;
    else
        return y;
}

//returns the max value of 3 numbers
int max3(float x, float y, float z)
{
    return max2(x, max2(y, z));
}

//returns the max value of any 3 given numbers
int main()
{
    float a, b, c, largest;

    //Input 3 floating point values
    cout << "Enter three floating point values, seperated by a space: ";
    cin >> a >> b >> c;

    //Calculate and display largest
    largest = max3(a, b, c);
    cout << "The largest value is: " << largest << endl;

    return 0;
}
