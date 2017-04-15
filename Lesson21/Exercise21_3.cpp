#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14159;

void calculateAreaAndCircumference(float radiusP, float &areaP, float &circumferenceP)
{
    areaP = PI * pow(radiusP, 2);
    circumferenceP = 2 * PI * radiusP;
}

int main()
{
    float radius;
    float area, circumference;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the radius of the circle: ";
        cin >> radius;

        calculateAreaAndCircumference(radius, area, circumference);

        cout << "The area of the circle is " << area << endl
             << "The circumference of the circle is " << circumference << endl << endl;
    }

    return 0;
}
