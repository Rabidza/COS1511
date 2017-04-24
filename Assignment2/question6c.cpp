#include <iostream>
using namespace std;

string getName()
{
    string firstNameG, lastNameG, fullNameG;

    cout << "Enter the first name: ";
    cin >> firstNameG;
    cin.get();
    cout << "Enter the surname: ";
    getline(cin, lastNameG, '\n');

    fullNameG = firstNameG + " " + lastNameG;

    return fullNameG;
}

float getHours(string fullNameH, float rateH)
{
    int hours = 0;
    int totalHours = 0;
    float pay;

    cout << "Starting at Monday, please enter the amount of hours worked each day" << endl;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter the amount of hours for day " << i << " : ";
        cin >> hours;
        totalHours += hours;
    }

    pay = totalHours * rateH;

    if (totalHours > 40)
        return pay + pay * 0.1;
    else
        return pay - pay * 0.1;
}

int main()
{
    string employee;
    float weeklyPay, rate;

    employee = getName();

    cout << "Please enter the rate: ";
    cin >> rate;

    weeklyPay = getHours(employee, rate);

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "The weekly pay for "<< employee << " is R" << weeklyPay << endl;

}
