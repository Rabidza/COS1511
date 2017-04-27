// Display the characters of a string in reverse
#include <iostream>
using namespace std;

// Returns the reverse of a given string
string reverse(string wordP)
{
    string result = "";
    for (int i = wordP.size() - 1; i >=0; i--)
        result += wordP[i];
    return result;
}

int main()
{
    string word, reversed;

    // Prompt for and input a word
    cout << "Enter a word: ";
    cin >> word;

    reversed = reverse(word);
    cout << "The reversed word is: " << reversed << endl;
    cout << endl;

    return 0;
}
