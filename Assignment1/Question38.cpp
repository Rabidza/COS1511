#include <iostream>
using namespace std;

int main()
{
    //answer can't be an int, it will always go to the default case
    int ans;
    cout <<"Type y for yes on n for no\n";
    cin >> ans;
    switch (ans)
    {
        case 'y':
        case 'Y': cout << "You said yes\n";
        break;
        case 'n':
        case 'N': cout << "You said no\n";
        break;
        default: cout <<"invalid answer\n";
    }
}
