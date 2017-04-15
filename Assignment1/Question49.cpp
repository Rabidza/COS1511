#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    switch(x)
    {
        case 1:
            cout << 1;
            break;
        // can't use x
        //case x < 4:
        //    cout << 2;
        //    break;
        // this is not a valid char
        //case 'ab':
        //    cout << 3;
        //    break;
        //case 1.5:
        //    cout << 4;
        //    break;
    }
    return 0;
}
