//Calculates tax on a salary
#include <iostream>
using namespace std;

int main( )
{
    const float HIGH_TAX = 0.40;
    const float LOW_TAX = 0.30;
    float salary, tax;

    //Ask for and input the salary
    cout << "Enter the employee's salary: ";
    cin >> salary;

    //Calculate and display the income tax
    if (salary > 70000.00)
    tax = salary * HIGH_TAX;
    else
    tax = salary * LOW_TAX;

    cout << endl << "The income tax on a salary of ";
    cout << salary << " is " << tax << endl;

    return 0;
}
