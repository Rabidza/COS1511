#include <iostream>
using namespace std;

int main()
{
    int entryNumber, score, totalScore;

    cout << "Enter the first dogs entry number: ";
    cin >> entryNumber;

    while(entryNumber != 0)
    {
        score = 0;
        totalScore = 0;
        for(int i = 1; i <= 10; i++)
        {
            cout << "Enter score: ";
            cin >> score;
            totalScore += score;
        }

        cout << "Dog number " << entryNumber << " scored " << totalScore << endl;

        cout << endl << "Enter the next dog's number (0 to stop): ";
        cin >> entryNumber;
    }

    return 0;
}
