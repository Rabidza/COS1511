#include <iostream>
using namespace std;

//swap two values
void swap(int & n1, int & n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main()
{
    int value1, value2;

    cout << "Enter two values: ";
    cin >> value1 >> value2;

    swap(value1,value2);
    cout << "Swapped these values are: " << value1 << " " <<  value2 << endl;


    return 0;
}
