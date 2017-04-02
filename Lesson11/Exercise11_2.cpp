#include <iostream>
using namespace std;

int main()
{
    int childAge, income, parentAge;
    bool married;

    cout << "Enter child age: ";
    cin >> childAge;
    cout << "Are you married? 0 = No, 1 = Yes: ";
    cin >> married;
    cout << "Enter annual income: ";
    cin >> income;
    cout << "Please enter your age: ";
    cin >> parentAge;

    bool accepted = childAge >= 2 && childAge <= 5 && !married && income < 60000 && parentAge <= 30;

    if (accepted)
        cout << endl << "Child has been accepted" << endl ;
    else
        cout << endl << "Child has not been accepted" << endl ;

    return 0;
}
