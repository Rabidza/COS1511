#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number between 1 and 100 (Inclusive): ";
    cin >> number;

    //Option 2
    if ((number >= 1) && (number <= 100))
        cout << "yes" << endl;

    return 0;
}
