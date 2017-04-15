#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    switch(i)
    {
        case 0: i=15;
        break;
        case 1: i=25;
        break;
        case 2: i=35;
        break;
        case 3: i=40;
        default: i=0;
    }
    cout << i <<endl;
}
