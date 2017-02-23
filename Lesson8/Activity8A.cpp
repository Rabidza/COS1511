//Calculate and display the users income tax payable based on his/her salary
//Attempt before doing the sub activities
#include <iostream>
using namespace std;

//Calculates tax on salary
int main()
{
    const float MAX_TAX =0.4;
    const float MIN_TAX =0.3;
    float salary, tax;

    //Ask the user for his salary and store the value
    cout << "Enter your salary: ";
    cin >> salary;

    //Calculate Tax Based on salary provided
    if (salary > 70000)
    {
        tax = salary * MAX_TAX;
    }
    else
    {
        tax = salary * MIN_TAX;
    }

    //Output the tax value for the user
    cout << endl << "Tax on a salary of ";
    cout << salary << " is " << tax << endl;

    return 0;
}

