// Calculate Tax on a salary
#include <iostream>
using namespace std;

int main()
{
    const float TAX_RATE = 0.4;
    float salary,tax;

    //Ask for and input the salary
    cout << "Enter your yearly salary: ";
    cin >> salary;

    cout << endl;

    //Calculate and display the income tax
    tax = salary * TAX_RATE;
    cout << "Tax on a salary of R" << salary;
    cout << " is R" << tax << endl;

    return 0;
}
