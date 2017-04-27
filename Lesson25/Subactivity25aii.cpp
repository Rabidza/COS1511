//Weird array parameters
#include <iostream>
using namespace std;

void inputArray(int arrayP[], int sizeP)
{
    cout << "Enter " << sizeP << " values:" << endl;
    for (int i = 0; i < sizeP; i++)
        cin >> arrayP[i];
}

void outputArray(const int arrayP[], int sizeP)
{
    cout << "The values are" << endl;
    for (int i = 0; i < sizeP; i++)
        cout << arrayP[i] << ' ';
    cout << endl;
}

int main( )
{
    const int SIZE = 10;
    int array[SIZE];

    inputArray(array, SIZE);
    outputArray(array, SIZE);

    return 0;
}
