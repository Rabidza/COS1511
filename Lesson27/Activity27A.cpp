//inputs a string and determines whether it is a palindrome.
#include <iostream>
using namespace std;

int main()
{
    string word, reverse;

    cout << "Enter a word: ";
    cin >> word;

    for (int i = word.size() - 1; i >= 0; i--)
        reverse += word[i];

    if (word == reverse)
        cout << word << " is a palindrome!" <<  endl;
    else
        cout << word << " is NOT a palindrome" << endl;

    return 0;
}

// Doing subactivities in case there are information "hidden" in there...
