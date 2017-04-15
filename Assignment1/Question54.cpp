#include <iostream>
using namespace std;

int main()
{
    // Option 1 -- Correct
    for (int count = 1; count <= 5; count = count + 1)
        cout << "*";
        cout << endl;

//    // Option 3 -- Incorrect
//    for (int count = 0; count <= 5; count = count + 1)
//        cout << "*";
//    cout << endl;

//    //option 4
//    for (int count = 1; count < 5; count = count +1)
//        cout <<"*";
//        cout <<endl;

    return 0;
}
