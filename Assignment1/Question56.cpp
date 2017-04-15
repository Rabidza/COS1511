#include <iostream>
using namespace std;

int main()
{
    //Option 3
    for (int outer = 1; outer <= 2; outer = outer + 1)
    {
        for (int inner = 1; inner <= 6; inner = inner + 1)
            cout << "*";
        cout << endl;
    }
}
