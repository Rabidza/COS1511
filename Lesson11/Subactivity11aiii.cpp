//Using a boolean operator
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter an integer between 10 and 20: ";
    cin >> n;

    //if (n > 10 && n < 20) // correct
    if (10 < n < 20)    // not correct
        cout << "Thank you!" << endl;
    else
        cout << n << " is not between 10 and 20!" << endl;

    return 0;
}
