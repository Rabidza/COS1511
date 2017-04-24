#include <iostream>
using namespace std;

// Exercise 8.2
int main()
{
    string colour;
    cout << "What is the colour of the sky? ";
    cin >> colour;

    if (colour == "red")
    {
        cout << "Correct" << endl;
    }
    else
    {
        cout << "No, blood is red." << endl;
    }

    return 0;
}
