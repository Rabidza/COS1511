//Inputs and display a string
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;

    cout << "Please enter your name: ";
    //cin >> name;
    //get cin from whole line
    getline(cin, name, '\n');
    cout << "Hi " << name << ", pleased to meet you!" << endl;

    return 0;
}

