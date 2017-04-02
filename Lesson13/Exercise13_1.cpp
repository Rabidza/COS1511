//University Decisions
#include <iostream>
using namespace std;

int main()
{
    float mark, earnings;
    char option;

    cout << "What was her average mark? ";
    cin >> mark;

    //Set the available options
    if (mark >= 90)
        option = 'A';
    else if (mark >= 75)
        option = 'B';
    else if (mark >= 60)
        option = 'C';
    else
        option = 'D';

    cout << "How much did she earn? ";
    cin >> earnings;
    // Determine and output the result of the option
    switch (option)
    {
        case 'A':
            cout << endl << "She can go to the university of her choice and you will buy her a car." << endl;
            break;
        case 'B':
            if (earnings > 5000)
                cout << endl << "She can go to the university of her choice and you will buy her a car." << endl;
            else
                cout << endl << "She can go to the university of her choice but she will not get a car." << endl;
            break;
        case 'C':
            cout << endl << "She can go to the nearest university" << endl;
            break;
        case 'D':
            cout << endl << "She cannot go to university and will have to consider other alternatives." << endl;
            break;
    }

    return 0;
}
