#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Enter a value: ";
    cin >> i;

    cout << "i < 10 is " << (i < 10) << endl;

    if (i)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
