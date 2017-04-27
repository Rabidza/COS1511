//Date of birth
#include <iostream>
#include <string>
using namespace std;
int main( )
{
    string idNum;
    string year, month, day, dateOfBirth;

    cout << "Enter an ID number: ";
    cin >> idNum;
    year = idNum.substr(0,2);
    month = idNum.substr(2,2);
    day = idNum.substr(4,2);
    if (year < "10")
        year = "20" + year;
    else
        year = "19" + year;

    dateOfBirth = day + '/' + month + '/' + year;
    cout << "Date of birth: " << dateOfBirth << endl;

    return 0;
}
