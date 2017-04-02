// Write a program that inputs the length and width of a room. It then checks whether 100 square metres of
// carpet will be enough to cover the floor of the room. If it is enough, display a message that reports this;
// otherwise display the size of the area that will not be covered.
#include <iostream>
using namespace std;

int main()
{
    float width, length, floorArea, areaNotCovered;
    int CARPET_SIZE = 100;

    // Get width and length
    cout << "Please enter the length of the room: ";
    cin >> length;
    cout << "Please enter the width of the room: ";
    cin >> width;
    cout << endl;

    // calculate floor size and determine whether the carpet will cover the floor
    floorArea = length * width;
    if (floorArea <= CARPET_SIZE)
    {
        cout << "The carpet will cover the floor!" << endl;

    }
    else
    {
        areaNotCovered = floorArea - CARPET_SIZE;
        cout << "The carpet is too small" << endl;
        cout << areaNotCovered << " square meteres will not be covered" << endl;
    }

    return 0;
}
