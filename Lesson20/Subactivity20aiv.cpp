//Displays a triangle of asterisks
#include <iostream>
using namespace std;

void displayRow(int n, char c)
{
    for(int i = 0; i < n; i++)
        cout << c;
    cout << endl;
}

int main()
{
    int m, d;

    cout << "Enter a positive integer: ";
    cin >> m;

    for(int i = 0; i <= m; i++)
        displayRow(i, '@');

    return 0;
}
