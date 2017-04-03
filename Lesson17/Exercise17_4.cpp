//Demo of the toupper function
#include <iostream>
using namespace std;

int main()
{
    char c, upperChar;

    cout << "Enter a letter of the alphabet: ";
    cin >> c;

    upperChar = toupper(c);
    cout << "The input " << c << " is converted to " << upperChar << endl;

    return 0;
}
