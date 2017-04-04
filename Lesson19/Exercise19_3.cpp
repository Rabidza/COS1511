//Determines the sum and product of 1 to n (Version 2)
#include <iostream>
using namespace std;

// sum from 1 up to n
int sum(int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
        s += i;
    return s;
}
// product from 1 up to n
int product(int n)
{
    int p = 1;
    for (int i = 2; i <= n; i++)
        p *= i;
    return p;
}
int main( )
{
    int upperLimit, answerSum, answerProd;

    cout << "Enter a positive integer: ";
    cin >> upperLimit;

    answerSum = sum(upperLimit);
    cout << "The sum of 1 up to " << upperLimit << " is " << answerSum << endl;

    answerProd = product(upperLimit);
    cout << "The product of 1 up to " << upperLimit << " is " << answerProd << endl;

    return 0;
}
