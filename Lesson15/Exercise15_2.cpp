//Displays all the ASCII values for 32 to 255
#include <iostream>
using namespace std;

int main()
{
    const int MAX = 255;
    const int MIN = 32;
    char ascii;

    for (int i = MIN; i <= MAX; i++)
        cout << endl << i << " = " << char(i);

    return 0;
}
