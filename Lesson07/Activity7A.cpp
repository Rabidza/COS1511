//Input and output of strings
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string surname, title, firstName;
    cout << "Please enter your Name, Surname and Title: ";
    getline(cin, firstName, '\n');
    getline(cin, surname, '\n');
    getline(cin, title, '\n');
    cout << surname << ", " << title << ", " << firstName << endl;
    return 0;
}
