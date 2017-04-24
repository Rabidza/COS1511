//Input and output of strings
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string surname, title, firstName, fullName;
    char initial;

    //input the name
    cout << "Enter the title: ";
    cin >> title;
    cout << "Enter the first name: ";
    cin >> initial >> firstName; // trick!
    cin.get();
    cout << "Enter the surname: ";
    getline(cin, surname, '\n');

    //Output the rearranged name
    fullName = surname + ", " + title + ", " + initial + ".";
    cout << "The rearranged name is " << fullName << endl;
    return 0;
}
