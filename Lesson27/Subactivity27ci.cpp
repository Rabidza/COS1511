// Determines whether a given word appears in a given sentence
#include <iostream>
#include <string>
using namespace std;

int main( )
{
    string sentence, oneWord;
    int position;

    // Prompt for and input a sentence and a word
    cout << "Enter a sentence: ";
    getline(cin, sentence, '\n');
    cout << "Enter a word: ";
    cin >> oneWord;

    if (oneWord.size( ) > sentence.size( ))
        cout << oneWord << " is longer than the sentence!" << endl;
    else
    {
        // Find the first occurrence of the word
        position = sentence.find(oneWord);
        if (position != -1)
            cout << oneWord << " appears in position " << position << endl;
        else
            cout << oneWord << " doesn't appear in " << sentence << endl;
    }
    return 0;
}
