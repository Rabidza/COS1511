// Determines whether the values in an array are stored in ascending order
#include <iostream>
using namespace std;

int main()
{
    const int LEN = 5;
    int a[] = {1, 2, 3, 4, 5};
    //int a[] = {5, 4, 3, 2, 1};
    int current = 0;
    bool ordered = false;

    for (int i = 0; i < LEN; i++)
    {
        if (current < a[i])
            current = a[i];
    }

    if(current == a[LEN-1])
        cout << "The array is stored in ascending order." << endl;
    else
        cout << "The array is NOT stored in ascending order." << endl;


    return 0;
}
