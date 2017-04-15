#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    // below is always true, 1 = true and the line below is doing an assignment of the variable x
    if (x = 1)
    {
        cout << "true";
    }

    return 0;
}
