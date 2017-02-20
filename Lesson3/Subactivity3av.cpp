// Ask user to input his age, output the users age at his next birthday
#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You will be " << age + 1 << " on your next birthday!" << endl;
    return 0;
}
