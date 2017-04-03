//Lesson 17 Exercise 17.5
//Shakespeare

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main( )
{
  const int NUMBER_OF_WORDS = 15;       //number of words in a 'sentence'
  char c;
  int numberOfLetters;
  srand(time(0));
  // loop to construct one sentence
  for (int i = 1; i <= NUMBER_OF_WORDS; i++)
  {
    // number of letters in i-th word
    numberOfLetters = rand( ) % 27  +  1;
    // loop to construct i-th word
    for (int j = 1; j <= numberOfLetters; j++)
    {
      // next character is generated and displayed
      c = rand( ) % 26  +  65;
      cout << c;
    }                  // the i-th word has now been displayed
    // blank between words is displayed
    if (i < NUMBER_OF_WORDS)
      cout << ' ';
  }                    // all words of the sentence have now been displayed
  // full stop at end of sentence
  cout << '.' << endl << endl;
  return 0;
}
