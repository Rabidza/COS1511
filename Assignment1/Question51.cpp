#include <iostream>
using namespace std;

int main()
{
    int age = 0;
    // Option 1 // correct
    cout << "Enter an age greater than zero: ";
    cin >> age;
    do //begin loop
    {
        cout << "The age entered was: " << age << endl << endl;
        cout << "Enter an age greater than zero: ";
        cin >> age;
    } while (age > 0);

    //Option 2 // once
//    cout << "Enter an age greater than zero: ";
//    cin >> age;
//    while (age < 0) //begin loop
//    {
//        cout << "The age entered was: " << age << endl << endl;
//        cout << "Enter an age greater than zero: ";
//        cin >> age;
//    }

    //Option 3 // incorrect i is not declared
//    for (i = 0; i < 10; i++) //begin loop
//    {
//        cout << "Enter an age greater than zero: ";
//        cin >> age;
//        cout << "The age entered was: " << age << endl << endl;
//    }

    //Option 4 // Also correct!
//    do //begin loop
//    {
//        cout << "The age entered was: " << age << endl << endl;
//        cout << "Enter an age greater than zero: ";
//        cin >> age;
//    } while (age > 0);
}
