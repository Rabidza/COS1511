//Using a boolean variable
#include <iostream>
using namespace std;

int main( )
{
    bool result;
    int n1, n2;

    cout << "Enter two integers: ";
    cin >> n1 >> n2;
    result = n1 > n2;

    //if (result)
    if (n1 > n2) // without boolean variable
        cout << n1 << " is greater than " << n2 << endl;
    else
        cout << n1 << " is not greater than " << n2 << endl;

    return 0;
}
