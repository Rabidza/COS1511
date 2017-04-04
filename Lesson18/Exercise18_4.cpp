//reads in the three sides of a triangle and then displays the area.
#include <iostream>
#include <cmath>
using namespace std;

float triangleArea(float side1P, float side2P, float side3P)
{
    float s;
    s = (side1P + side2P + side3P) / 2;

    return sqrt(s * (s - side1P) * (s - side2P) * (s - side3P));
}

int main()
{
    float side1, side2, side3, area;

    //Ask for the 3 side lenghts of the triangle
    cout << "Enter the 3 lengths of the triangle seperated by spaces: ";
    cin >> side1 >> side2 >> side3;

    //calculate and display the area of the triangle
    area = triangleArea(side1, side2, side3);
    cout << endl << "The area of the triangle is: " << area << endl;


    return 0;
}
