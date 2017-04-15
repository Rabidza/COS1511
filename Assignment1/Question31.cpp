#include <iostream>
using namespace std;

int main()
{
    int x=0;
    do
    {
        x++;
        cout << "endless loop";
    } while(x > 0);

    cout << x;

    return 0;
}
