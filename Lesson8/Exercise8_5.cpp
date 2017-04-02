#include <iostream>
using namespace std;

int main()
{
    // Determine entry fee based on date of birth
    // anyone born before 1945 enters free, others pay R20
    int dateOfBirth;
    const int CRITICAL_VAL = 1945;
    const float ENTRY_FEE = 20.0;

    cout << "When were you born? ";
    cin >> dateOfBirth;
    if (dateOfBirth < CRITICAL_VAL)
        cout << "Free entry";
    else
        cout << "Entrance fee R" << ENTRY_FEE;
    cout << endl;

    return 0;
}
