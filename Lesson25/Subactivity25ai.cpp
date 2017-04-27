//Weird array parameters
#include <iostream>
using namespace std;

const int SIZE = 10;

void inputArray(int arrayP[])
{
    cout << "Enter " << SIZE << " values:" << endl;
    for (int i = 0; i < SIZE; i++)
        cin >> arrayP[i];
}

void outputArray(const int arrayP[])
{
    cout << "The values are" << endl;
    for (int i = 0; i < SIZE; i++)
        cout << arrayP[i] << ' ';
    cout << endl;
}

int main( )
{
    int array[SIZE];

    inputArray(array);
    outputArray(array);

    return 0;
}
