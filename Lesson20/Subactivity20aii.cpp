#include <iostream>
using namespace std;

void displayRow(int n)
{
    for(int i = 0; i < n; i++)
        cout << '*';
    cout << endl;
}

int main()
{
    int m;

    cout << "Enter a positive integer: ";
    cin >> m;

    cout << endl;
    displayRow(m);

    return 0;
}
