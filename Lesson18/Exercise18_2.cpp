// test whether three numbers represent the valid sides of a triangle
#include <iostream>
using namespace std;

bool greaterThanTest(float val1P, float val2P, float val3P)
{
    if ((val1P + val2P) > val3P)
        return true;
    else
        return false;
}

//triangleTest:
bool triangleTest(float side1P, float side2P, float side3P)
{
    return (greaterThanTest(side1P, side2P, side3P) && greaterThanTest(side1P, side3P, side2P) && greaterThanTest(side2P, side3P, side1P));
}

int main()
{
    int side1, side2, side3;
    bool result;

    //Get user input
    cout << "Enter value for side 1: ";
    cin >> side1;
    cout << "Enter value for side 2: ";
    cin >> side2;
    cout << "Enter value for side 3: ";
    cin >> side3;

    //Test whether the 3 sides entered are in fact sides of a triangle
    result = triangleTest(side1, side2, side3);

    if (result)
        cout << endl << "The values entered (" << side1 << ", " << side2 << ", " << side3 << ")"
             << " represent the sides of a triangle" << endl;
    else
        cout << endl << "The values entered (" << side1 << ", " << side2 << ", " << side3 << ")"
             << " do NOT represent the sides of a triangle" << endl;

    return 0;
}
