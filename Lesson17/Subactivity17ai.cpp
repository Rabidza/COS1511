//Display 10 random numbers
#include <iostream>
#include <stdlib.h>
using namespace std;

int main( )
{
    int r;
    int seed;
    cout << "Enter a seed for the random number generator: ";
    cin >> seed;
    srand(seed);

    for (int i = 0; i < 10; i++)
    {
        r = rand( );
        cout << "The number is " << r << endl;
    }
    return 0;
}
