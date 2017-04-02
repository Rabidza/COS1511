//Calculates the sum of all odd numbers up to any given number
#include <iostream>
using namespace std;

int main()
{
    int number, result;

    //Get number from user
    cout << "Enter any number: ";
    cin >> number;
    result = 0;

    //Display the sums off all odd integers
    for(int i = 1; i <= number; i+=2)
    {
        result += i;
        cout << "Sum up to " << i << " is " << result << endl;
    }

    return 0;
}
