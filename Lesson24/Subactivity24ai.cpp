// Average of ten marks
#include <iostream>
using namespace std;

int main()
{
    int MAX = 10;
    float mark, average;
    float total = 0;

    for (int i = 0; i < MAX; i++)
    {
        cout << "Enter mark: ";
        cin >> mark;
        total += mark;
    }

    average = total / MAX;
    cout << "The average mark is: " << average << endl;

    return 0;
}
