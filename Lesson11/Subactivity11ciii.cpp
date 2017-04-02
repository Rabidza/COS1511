//Using a boolean variable and a boolean operator
#include <iostream>
using namespace std;
int main( )
{
    bool result;
    int n;

    cout << "Enter an integer between 10 and 20: ";
    cin >> n;
    result = n > 10 && n < 20;

    if (result)
        cout << "Thank you!" << endl;
    else
        cout << n << " is not between 10 and 20!" << endl;

    return 0;
}
