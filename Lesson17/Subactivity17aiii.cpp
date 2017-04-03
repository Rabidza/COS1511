//Display 10 random numbers
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main( )
{
    int r;

    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        r = 1 + rand( ) % 100;
        cout << "The number is " << r << endl;
    }
    return 0;
}
