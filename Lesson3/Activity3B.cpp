// Determine the quotient from two numbers input from the keyboard.
#include <iostream>
using namespace std;

int main()
{
    int value1, value2;
    cout << "Enter two numbers: ";
    cin >> value1 >> value2;
    cout << "The remainder of " << value1 << " divided by " << value2 << " is " << value1 % value2 << endl;
    return 0;
}
