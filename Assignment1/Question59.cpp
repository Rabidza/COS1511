#include <iostream>
using namespace std;

int main()
{
    int num1 = 10;
    int num2 = 15;
    int temp = 0;

    cout << "Before:" << endl;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl << endl;

    //Option 2
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After:" << endl;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
}
