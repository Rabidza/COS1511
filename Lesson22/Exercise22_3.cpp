#include <iostream>
using namespace std;

//rotate three values
void swap(int & n1, int & n2, int & n3)
{
    int temp;
    temp = n1;
    n1 = n3;
    n3 = n2;
    n2 = temp;
}

int main()
{
    int value1, value2, value3;

    cout << "Enter three values: ";
    cin >> value1 >> value2 >> value3;

    swap(value1,value2, value3);
    cout << "Rotated once the values are: " << value1 << " " <<  value2 << " " << value3 << endl;


    return 0;
}
