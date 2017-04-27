#include <iostream>
using namespace std;

int main()
{
    string sentence, word1, word2;
    int pos;

    cout << "Enter a senctence: ";
    getline(cin, sentence, '\n');

    cout << "Enter a word to search for: ";
    cin >> word1;

    cout << "Enter a word to replace it with: ";
    cin >> word2;

    pos = sentence.find(word1);
    while(pos != -1)
    {
        sentence.replace(pos, word1.size(), word2);
        pos = sentence.find(word1);
    }

    cout << "The new sentence is: " << sentence;

    return 0;
}
