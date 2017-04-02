//Ten in the bed
#include <iostream>
using namespace std;

int main()
{
    int num = 10;

    while(num > 1)
    {
        cout << "There were " << num << " in the bed" << endl
             << "And the little one said:" << endl
             << "\"Roll over, roll over!\"" << endl
             << "So they all rolled over," << endl
             << "And one fell out," << endl;
        num--;
    }
        cout << "There was 1 in the bed" << endl
            << "And the little one said:" << endl
            << "\"Good night!\"" << endl << endl;

    return 0;
}
