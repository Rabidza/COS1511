// Ask user to input his age as well as his mohters and output the age she was when the user was born
#include <iostream>
using namespace std;

int main()
{
    int momAge, yourAge;
    cout << "Enter your mom's age and your age: ";
    cin >> momAge >> yourAge;
    cout << "Your mom was " << momAge - yourAge << " years old when you were born." << endl;
    return 0;
}
