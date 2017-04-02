//To test the value of the control variable after a for loop
#include <iostream>
using namespace std;
int main( )
{
    int i;

    for (i = 10; i <= 20; i++)
        cout << "i = " << i << endl;

    cout << "Final value: " << i << endl;

    return 0;
}
