#include <iostream>
using namespace std;

int main()
{
    int x, y;
    x = -1;
    y = 0;
    while(x < 3)
    {
        y += 2;
        x += 1;
    }
    cout << y << endl;

    return 0;
}
