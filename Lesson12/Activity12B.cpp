#include <iostream>
using namespace std;

int main()
{
    char answer;

    cout << "Is the animal warm blooded? (Y/N) ";
    cin >> answer;

    if (answer == 'Y')
    {
        cout << "Does it suckle its young? (Y/N) ";
        cin >> answer;
        if (answer == 'Y')
            cout << endl << "The animal is a mammal" << endl;
        else
            cout << endl << "The animal is a bird" << endl;
    }
    else
    {
        cout << "Does it ever breathe through gills in its life? (Y/N) ";
        cin >> answer;
        if (answer == 'Y')
        {
            cout << "Does it breathe through gills all of its life? (Y/N) ";
            cin >> answer;
            if (answer == 'Y')
                cout << endl << "The animal is a fish" << endl;
            else
                cout << endl << "The animal is an amphibian" << endl;
        }
        else
            cout << endl << "The animal is a reptile" << endl;
    }

    return 0;
}
