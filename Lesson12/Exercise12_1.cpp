#include <iostream>
using namespace std;

int main()
{
    int x,y,z;

    //Get three values from the user
    cout << "Enter three values: ";
    cin >> x >> y >> z;

    //Do calculations
    if ((x + y) == z)
        cout << endl << "Yes, x + y = z" << endl;
    else if ((y + z) == x)
        cout << endl << "Yes, y + z = x" << endl;
    else if ((x + z) == y)
        cout << endl << "Yes, x + z = y" << endl;
    else
        cout << endl << "No, the sum of any two values does not equal the remaining number." << endl;

    return 0;
}
