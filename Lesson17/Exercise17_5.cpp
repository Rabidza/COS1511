//Infinte Monkey Theorem
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    char randomChar;
    int length;

    srand(time(0));
    for (int i = 0; i < 15; i++)
    {
        length = 1 + rand() % 27;
        for (int j = 0; j <= length; j++)
        {
            randomChar = 65 + rand() % 26;
            cout << randomChar;
        }
        cout << " ";
    }

    return 0;
}

