// Displays ASCII characters
#include <iostream>
using namespace std;

int main( )
{
    char c;

    for (int i = 32; i <= 255; i++)
    {
        c = i;

        if (i < 100) // to align 2 digit and 3 digit numbers
          cout << i << " " << c << " ";
        else
          cout << i << " " << c << " ";
        if (i % 8 == 7) // display the info in 8 columns
          cout << endl;
    }

    return 0;
}
