//Illustrate te getline function
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string s;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter a sentence: ";
    getline(cin, s, '\n');

    cout << "The number is " << n << endl;
    cout << "The sentence is " << s << endl;
    return 0;
}
