//Raises one number to an integer power
#include <iostream>
using namespace std;

float iPow(float xP, int nP)
{
    float answer = 1;
    for (int i = 1; i <= nP; i++)
        answer *= xP;
    return answer;
}
int main( )
{
    float x;
    int n;

    cout << "Enter a number and a non-negative integer: ";
    cin >> x >> n;
    cout << x << " to the power " << n << " = ";
    cout << iPow(x, n) << endl;

    return 0;
}
