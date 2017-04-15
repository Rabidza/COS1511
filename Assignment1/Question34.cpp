#include <iostream>
using namespace std;

int main()
{
    int x = 16, y = 2;

    bool test = (!(x < 15 && y >= 3));
    bool test1 = (x > 15 && y <= 3);

    cout << test << endl;
    cout << test1;
}

