//Displays all powers of x (=2) less than a limit
#include <iostream>
using namespace std;

// find xP to the power of nP
float iPow(int xP, int nP)
{
    float answer = 1;
    for (int i = 1; i <= nP; i++)
        answer *= xP;
    return answer;
}
int main( )
{
    float limit, result;
    int n, x;

    cout << "Enter a limit for the calculations: ";
    cin >> limit;

    x = 2;
    n = 1;
    result = iPow(x, n);
    while (result < limit)
    {
        cout << x << " to the power " << n << " = " << result << endl;
        n++;
        result = iPow(x, n);
    }

    return 0;
}
