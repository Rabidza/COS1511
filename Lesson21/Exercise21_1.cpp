// Simulates throwing dice until a total of 7 is thrown
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void calcTotalDice(int &totalP)
{
    int die1 = rand( )%6 + 1;
    int die2 = rand( )%6 + 1;
    cout << "Throw: " << die1 << " and " << die2 << endl;
    totalP = die1 + die2;
}

int main( )
{
    int count, total;
    srand(time(0));

    calcTotalDice(total);
    count = 1;

    while (total != 7)
    {
        calcTotalDice(total);
        count++;
    }

    cout << "It took " << count << " throws ";
    cout << "before 7 was thrown." << endl;

    return 0;
}
