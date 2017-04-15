#include <iostream>
using namespace std;

int main()
{
    // I think this outputs large because c++ ignores white space
    //  if the if was nested in {} the output would have been nothing
    int x = 15;
    if(x < 20)
        if(x < 10)
            cout << "less than 10 ";
    else
        cout << "large\n";
}
