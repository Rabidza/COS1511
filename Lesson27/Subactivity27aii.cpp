// Display the characters of a string in reverse
#include <iostream>
using namespace std;

int main()
{
    string word;

    // Prompt for and input a word
    cout << "Enter a word: ";
    cin >> word;

    cout << "The reversed word is: " << endl;
    for (int i = word.size()-1; i >= 0; i--)
        cout << word[i];
    cout << endl;

    return 0;
}
