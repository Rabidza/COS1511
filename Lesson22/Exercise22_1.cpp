// Calculate and display any input value to an increment
#include <iostream>
using namespace std;

//Increment user defined value by 15
void increment15(int & valueP)
{
    valueP += 15;
}

int main()
{
    int value;

    cout << "Enter a value: ";
    cin >> value;

    increment15(value);
    cout << "New value: " << value << endl;

    return 0;
}
