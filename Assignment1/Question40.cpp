#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    {
        int x = 13;
        cout << x <<",";
    }
    cout << x << endl;
}
