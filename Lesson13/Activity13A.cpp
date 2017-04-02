//Enter two numbers and perform some arithmic on them based on user input
#include <iostream>
using namespace std;

int main()
{
    float x, y, result;
    char operation;
    bool error = false;

    // Get input from user
    cout << "Enter two values: ";
    cin >> x >> y;
    cout << "Choose an operation" << endl;
    cout << "(A: addition, S: Subtraction, M: Multiplication, D: Division): ";
    cin >> operation;

    //Calculate the result
    switch (operation)
    {
        case 'a':
        case 'A':
            result = x + y;
            break;
        case 's':
        case 'S':
            result =  x - y;
            break;
        case 'm':
        case 'M':
            result =  x * y;
            break;
        case 'd':
        case 'D':
            if(y == 0)
                error = true;
            else
                result = x / y;
            break;
        default:
            error = true;
    }

    //Output the result
    if(!error)
        cout << endl << "The result is: " << result << endl;
    else
        cout << endl << "Input resulted in an error!" << endl;

    return 0;
}
