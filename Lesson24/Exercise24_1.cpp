// Finds the greatest element in an array and swaps this element with the first element of the array
#include <iostream>
using namespace std;

int main()
{
    const int NUM_VALUES =  10;
    int array[] = {10, 3, 56, 7, 0, 5, 44, 99, 76, 1};
    int max = 0;
    int index = 0;

    for (int i = 0; i < NUM_VALUES; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
            index = i;
        }
    }

    array[index] = array[0];
    array[0] = max;

    //checked answers and I could have used the following:
    //swap(array[index], array[0]);

    for (int i = 0; i < NUM_VALUES; i++)
    {
        cout << array[i] << " | ";
    }

    cout << endl;

    return 0;
}
