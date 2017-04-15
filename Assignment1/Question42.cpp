#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    if(x++ > 10)
    {
        x =13;
    }
    cout << "the value of x: " << x;
}
