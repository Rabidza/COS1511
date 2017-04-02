//Calculates the number of digits in a number
#include <iostream>
using namespace std;

int main()
{
    int number, num, counter;

    do
    {
        cout << "Enter an integer (0 to end): ";
        cin >> number;
        num = number;
        if (num != 0)
        {
            counter = 0;
            do
            {
                counter++;
                num /= 10;
            } while (num != 0);

            cout << number << " contains " << counter << " digit(s)" << endl;
        }
    } while (number != 0);

    return 0;
}
