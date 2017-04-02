//Ten in the bed (version for Lesson 15)
#include <iostream>
using namespace std;

int main( )
{
    for (int num = 10; num > 1; num--)
    {
        cout << "There were " << num << " in the bed" << endl
        << "And the little one said:" << endl
        << "\"Roll over, roll over!\"" << endl
        << "So they all rolled over, " << endl
        << "And one fell out," << endl;
    }

    cout << "There was 1 in the bed" << endl
    << "And the little one said:" << endl
    << "\"Good night!\"" << endl;
    return 0;
}
