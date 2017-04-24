//calculate and print pay slips
#include <iostream>
using namespace std;

void getEmployeeInfo(string & theEmployeeP, float & theHoursWorkedP,float & thePayRateP)
{

    cout << "Please enter the name of the employee: ";
    getline(cin, theEmployeeP, '\n');
    cout << "Enter the number of hours worked: ";
    cin >> theHoursWorkedP;
    cout << "Enter the hourly payrate: ";
    cin >> thePayRateP;
    cin.get();
}

float calculatePay(float numHoursWorkedP, float hourlyPayRateP)
{
    if (numHoursWorkedP > 40)
        return 40 * hourlyPayRateP + ((numHoursWorkedP - 40) * (1.5 * hourlyPayRateP));
    else
        return numHoursWorkedP * hourlyPayRateP;
}

void displayPaySlip(string employeeD, float hoursWorkedD, float hourlyPayRateD, float PayD)
{
    float overTime;

    overTime = hoursWorkedD - 40;

    //Set display precision
    cout.setf(ios::fixed);
    cout.precision(2);

    // Start displaying the payslip
    cout << endl
         << "Pay slip for " << employeeD << endl
         << "Hours worked: " << hoursWorkedD << " hours" << endl
         << "Overtime hours: " << overTime << endl
         << "Hourly pay rate: " << hourlyPayRateD << endl
         << "Pay: " << PayD << endl << endl;
}

int main()
{
    string theEmployee;
    float theHoursWorked, thePayRate, pay;

    for (int i = 0; i < 5; i++)
    {
        getEmployeeInfo(theEmployee, theHoursWorked, thePayRate);
        pay = calculatePay(theHoursWorked, thePayRate);
        displayPaySlip(theEmployee, theHoursWorked, thePayRate, pay);
    }

    return 0;
}
