//Output the spoonerism of two words
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word1, word2;
    char char1, char2;
    cout << "Enter two words: ";
    cin >> char1 >> word1 >> char2 >> word2;
    cout << char2 + word1 + " " + char1 + word2;
}
