//ASCII converter
#include <iostream>
using namespace std;

int main()
{
    //try to get same results by removing variable c
    //char c;
    int i;
    cout << "Enter an integer: ";
    cin >> i;
    //c = i;
    cout << i << " represents the charachter " << char(i) << endl;
    return 0;
}
