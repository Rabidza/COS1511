// calculate the remainder of 234 divided by 13.
#include <iostream>
using namespace std;

int main()
{
    cout << "The remainder of 234 / 13 is " << 234 - ((234 / 13) * 13) << endl;
    //I already know about the "modulo"
    //cout << "The remainder of 234 / 13 is " << 234 % 13 << endl;
    return 0;
}
