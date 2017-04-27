#include <iostream>
using namespace std;

int main()
{
    string sentence, word;
    int pos, count;

    cout << "Enter a sentence: ";
    getline(cin, sentence, '\n');

    cout << "Enter a word to count: ";
    cin >> word;

    count = 0;
    pos = sentence.find(word);
    while(pos != -1)
    {
        count++;
        pos = sentence.find(word, pos + 1);
    }

    cout << "The word occurs " << count << " time(s) in the sentence" << endl;


    return 0;
}
