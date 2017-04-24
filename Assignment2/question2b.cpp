#include <iostream>
using namespace std;

int main()
{
    int next = 2, sum = 0;
    while (next <= 5)
    {
        sum = sum + next;
        next++;
    }
    cout << "The sum of 2 through 5 is " << sum << endl;

    return 0;
}
