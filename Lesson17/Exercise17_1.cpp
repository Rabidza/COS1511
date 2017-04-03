//Generates 6 random numbers for the SA lottery
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int num1, num2, num3, num4, num5, num6;

    //set random seed
    srand(time(0));

    //first random number
    num1 = 1+ rand() % 49;

    // second random number
    do
    {
        num2 = 1+ rand() % 49;
    }while (num1 == num2);

    // third random number
    do
    {
        num3 = 1+ rand() % 49;
    } while ((num1 == num3) || (num2 == num3));

    // fourth random number
    do
    {
        num4 = 1+ rand() % 49;
    } while ((num1 == num4) || (num2 == num4) || (num3 == num4));

    // fifth random number
    do
    {
        num5 = 1+ rand() % 49;
    } while ((num1 == num5) || (num2 == num5) || (num3 == num5) || (num4 == num5));

    // sixth random number
    do
    {
        num6 = 1+ rand() % 49;
    } while ((num1 == num6) || (num2 == num6) || (num3 == num6) || (num4 == num6) || (num5 == num6));

    // Display the lottery numbers
    cout << "The 6 random numbers are:" << endl;
    cout << num1 << endl
         << num2 << endl
         << num3 << endl
         << num4 << endl
         << num5 << endl
         << num6 << endl;

    return 0;
}
