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

// Checks if the word is a palindrome
bool isPalindrome(string wordP)
{
    return wordP == reverse(wordP);
}

int main()
{
    string word;

    // Prompt for and input a word
    cout << "Enter a word: ";
    cin >> word;

    if (isPalindrome(word))
        cout << word << " is a palindrome!" <<  endl;
    else
        cout << word << " is NOT a palindrome" << endl;

    return 0;
}
