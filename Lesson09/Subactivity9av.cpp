//A program that uses a while loop to display the numbers from 10 to 20 with a blank line after each number
#include <iostream>
using namespace std;

int main()
{
    int value = 10;

    while(value <= 20)
    {
        cout << value << endl << endl;
        value++;
    }

    return 0;
}
