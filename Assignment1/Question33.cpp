#include <iostream>
using namespace std;

int main()
{
    int other = 3, myInt = 0;
    // not 100% sure why the divide by zero does not cause an error
    // seems like C++ only checks whether the first variable is true in an "and" evaluation if not it goes to the next if/else
    if(myInt != 0 && other % myInt !=0)
        cout << "other is odd\n";
    else
        cout << "other is even\n";
}
