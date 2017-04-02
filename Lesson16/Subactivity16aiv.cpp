//Calculates the number of digits in a number
#include <iostream>
using namespace std;

int main()
{
    int number, num, counter;

    //Get first integer
    cout << "Enter an integer (0 to end): ";
    cin >> number;

    while (number != 0)
    {
        num = number;

        //Calculate number of digits in integer
        counter = 0;
        do
        {
            counter++;
            num /= 10;
        } while (num != 0);

        cout << number << " contains " << counter << " digit(s)" << endl;

        //Get the next number
        cout << "Enter another integer (0 to end): ";
        cin >> number;
    }

    return 0;
}
