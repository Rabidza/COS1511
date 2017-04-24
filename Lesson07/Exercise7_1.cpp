//The + operator
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //int x, y, z;
    //string x, y, z;
    char x, y, z;
    cout << "Enter two numbers for variables x and y: ";
    cin >> x >> y;

    z = x + y;
    cout << "x + y is " << z << endl;

    return 0;
}
