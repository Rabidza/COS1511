//Multiplication Table representation
#include <iostream>
using namespace std;

int main()
{
    int result;

    //Create top row
    for (int i = 1; i <= 9; i++)
        cout << '\t' << i;

    //Create body
    cout << endl;
    for (int j = 1; j <= 9; j++)
    {
        cout << j;
        for (int k = 1; k <= j; k++)
        {
            result = j * k;
            cout << '\t' << result;
        }
        cout << endl;
    }

    return 0;
}
