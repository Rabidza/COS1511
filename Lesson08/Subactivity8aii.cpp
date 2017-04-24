// Calculate Tax on a salary
#include <iostream>
using namespace std;

int main()
{
    const float HIGH_TAX = 0.40;
    const float LOW_TAX = 0.30;
    float salary,tax;

    //Ask for and input the salary
    cout << "Enter your yearly salary: ";
    cin >> salary;

    cout << endl;

    //Calculate and display the income tax
    if (salary > 70000.00)
        tax = salary * HIGH_TAX;
    else
        tax = salary * LOW_TAX;

    cout << "Tax on a salary of R" << salary;
    cout << " is R" << tax << endl;

    return 0;
}
