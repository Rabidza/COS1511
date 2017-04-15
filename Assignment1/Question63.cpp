#include <iostream>
using namespace std;

int main()
{
    int testScore;

    cout << "Enter the test score: ";
    cin >> testScore;

    //Option 2
    if ((testScore >= 0) && (testScore <= 100))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}
