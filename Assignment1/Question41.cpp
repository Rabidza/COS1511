#include <iostream>
using namespace std;

int main()
{
    {
            int x = 13;
            cout << x <<",";
        }
        // error -- this x is not declared in scope
        cout << x << endl;
}
