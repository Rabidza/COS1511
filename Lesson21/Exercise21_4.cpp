#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14159;

float calculateArea(float radiusP)
{
    return PI * pow(radiusP, 2);
}

float calculateCircumference(float radiusP)
{
    return 2 * PI * radiusP;

}

int main()
{
    float radius, area, circumference;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the radius of the circle: ";
        cin >> radius;

        area = calculateArea(radius);
        circumference = calculateCircumference(radius);

        cout << "The area of the circle is " << area << endl
             << "The circumference of the circle is " << circumference << endl << endl;
    }

    return 0;
}
