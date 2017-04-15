#include <iostream>
using namespace std;

int main()
{
    int count = 0;

//    //Option 1 -- Incorrect 1 to 11 is printed
//    do //begin loop
//    {
//        count = count + 1;
//        cout << count << endl;
//    } while (count <=10);

//    //Option 2 -- Incorrect semicolon missing after while condition and even if fixed prints 0 to 10
//    do //begin loop
//    {
//        cout << count;
//        count = count + 1;
//    } while (count <=10);

    //Option 3 -- Correct
    do //begin loop
    {
        count = count + 1;
        cout << count << endl;
    } while (count < 10);

//    //Option 4 -- Incorrect prints from 0 to 9
//    do //begin loop
//    {
//        cout << count << endl;
//        count = count + 1;
//    } while (count < 10);
}
