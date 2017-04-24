//Think of a number
#include <iostream>
using namespace std;

int main()
{
    const int NUMBER = 40;
    int answer;
    cout << "Think of a number between 30 and 50. Write it down" << endl;
    cout << "Then do the following calculations on paper:" << endl << endl;
    cin.get();
    cout << "Double it" << endl;
    cin.get();
    answer = NUMBER * 2;
    cout << "Add 29 to this" << endl;
    cin.get();
    answer += 29;
    cout << "Double the result again" << endl;
    cin.get();
    answer *= 2;
    cout << "Subtract the original number from your answer" << endl;
    cin.get();
    answer -= NUMBER;
    cout << "Divide the answer by your original number and throw away any remainder" << endl;
    cin.get();
    answer /= NUMBER;
    cout << "Your final answer is " << answer << endl;
    return 0;

}
