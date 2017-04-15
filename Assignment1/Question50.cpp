#include <iostream>
using namespace std;

int main()
{
    // infinite loop, i is zero and subtracts 1 for each loop and i should only stop if i is larger than 10 which will never happen
    for(int i=0; i < 10; i--)
    {
        cout << "Hello\n";
    }
}
