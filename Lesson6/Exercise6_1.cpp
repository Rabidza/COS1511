//Calculate the area of a room
#include <iostream>
using namespace std;

int main()
{
    float width, length, area;

    //Ask for and assign width and length
    cout << "Insert length and width in meters: ";
    cin >> width >> length;

    //Calculate Area
    area = width * length;

    //Output area with a fixed precision of 3 decimals
    cout.setf(ios::fixed);
    cout.precision(3);
    cout << "The area of the room is: " << area <<endl;

    return 0;
}
