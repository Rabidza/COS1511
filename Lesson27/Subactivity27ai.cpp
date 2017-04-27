// Split a string into individual characters
#include <iostream>
using namespace std;

int main()
{
    string word;

    // Prompt for and input a word
    cout << "Enter a word: ";
    cin >> word;

    // Display the characters on separate lines
    cout << "The letters are: " << endl;
    for (int i = 0; i < word.size( ); i++)
        cout << word[i] << endl;

    return 0;
}
