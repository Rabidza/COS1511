#include <iostream>
using namespace std;

int main()
{
    int x = 0, y = 10;
    while(x < 10 && y > 3)
    {
        cout << "Looping" << endl;
        x++;
        y--;
    }
}
