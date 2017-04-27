#include <iostream>
using namespace std;

//Inputs SIZE integers into an array
void inputArray(int valuesP[], int n)
{
    cout << "Enter " << n << " integers: ";

    for (int i = 0; i < n; i++)
        cin >> valuesP[i];
    cout << endl;
}

// Checks whether an input value exists in the array
void integerExist(const int valuesP[], int n)
{
    int num;
    bool exist = false;
    int i = 0;

    cout << "Enter a value to check: ";
    cin >> num;

    while (!exist && i < n)
    {
        if (valuesP[i] == num)
            exist = true;
        i++;
    }

    if (exist)
        cout << "The integer " << num << " is in the array" << endl;
    else
        cout << "The integer " << num << " is NOT in the array" << endl;
}

// Gets the smallest element in the array
void getSmallest(const int valuesP[], int n)
{
    int min = valuesP[0];
    for (int i = 1; i < n; i++)
    {
        if (valuesP[i] < min)
            min = valuesP[i];
    }

    cout << "The smallest element is: " << min << endl;
}

// Reverses the array and displays the result
void reverse(int valuesP[], int n)
{
    int reverseValues[n];
    for (int i = n - 1; i >= 0; i--)
    {
        reverseValues[i] = valuesP[i];
        cout << reverseValues[i] << " | ";
    }

    cout << endl;

}

int main()
{
    const int SIZE = 10;
    int arrayA[SIZE];
    int number;

    inputArray(arrayA, SIZE);
    integerExist(arrayA, SIZE);
    getSmallest(arrayA, SIZE);
    reverse(arrayA, SIZE);

    return 0;
}
