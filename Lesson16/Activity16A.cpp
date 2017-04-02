//Game based on tossing a coin
#include <iostream>
using namespace std;

int main()
{
    int numTosses, numGames, payout;
    char toss;
    float totalPayout, average;

    //Get the number of games to be played
    cout << "How many times will the game be played? ";
    cin >> numGames;

    //Fix formatting since we are working with money
    cout.setf(ios::fixed);
    cout.precision(2);

    totalPayout = 0;
    for (int i = 1; i <= numGames; i++)
        {
            //Input tosses
            cout << "Enter a value for the coin (H / T) ";
            cin >> toss;

            //Play the game
            numTosses = 1;
            while (toss == 'T' || toss == 't')
            {
                cout << "Enter another value (H / T): ";
                cin >> toss;
                numTosses++;
            }

            //Calculate payout
            payout = 1;
            for (int j = 1; j <= numTosses; j++)
                payout *= 2;
            cout << "Payout: R" << payout << endl;
            totalPayout += payout;

        }

    //Calculate and display average payout
    average = totalPayout / numGames;
    cout << "Average payout is R" << average << endl;

    return 0;
}
