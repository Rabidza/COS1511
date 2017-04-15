#include <iostream>
using namespace std;

int main()
{
    //Option 4
    for (int outer = 1; outer <= 3; outer = outer + 1)
    {
        for (int inner = 1; inner <= 5; inner = inner + 1)
            cout << "*" ;
          cout << endl;
    }
}
