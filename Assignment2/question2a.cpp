#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int i = 1;

    while(i <= n)
    {
        if (i < 5 && i != 2)
            cout << 'X';
        i++;
    }

    return 0;
}
