#include <iostream>
using namespace std;

int main()
{
    int numPeople, counter;
    float height, totalHeight, averageHeight;

    //Get user input
    cout << "How many people participated in the survey? ";
    cin >> numPeople;

    //Calculate average Height
    if (numPeople != 0)
    {
        averageHeight = 0;
        counter = 0;
        totalHeight = 0;

        while (counter < numPeople)
        {
            cout << "Enter Height in meters: ";
            cin >> height;
            totalHeight += height;
            counter ++;
        }

        averageHeight = totalHeight / numPeople;

        cout << endl << "Average height is " << averageHeight << " m" << endl;
    }
    else
        cout << endl << "There were no survey participants" << endl;

    return 0;
}
