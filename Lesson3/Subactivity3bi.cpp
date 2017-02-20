//Calculates the remainder of one number divided by another
#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter two numbers: ";
    cin >> m >> n;
    cout << "The remainder of " << m << " divided by " << n;
    cout << " is " << m - m / n * n << endl;
}
