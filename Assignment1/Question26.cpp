#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    if( x < 3)
    {
        cout << "small\n";
    }
    else
    {
        if( x < 4)
        {
            cout << "medium\n";
        }
        else
        {
            if( x < 6)
            {
                cout << "large\n";
            }
            else
            {
                cout << "giant\n";
            }
        }
    }
}
