#include <iostream>
using namespace std;

int main()
{
    int num1 = 10;
    int num2 = 20;
    float avg = 0.0; // changed average to avg
//    avg = num1 + num2 / 2;

    avg = (static_cast<int>(num1) + static_cast<int>(num2)) / 2.3; // could be correct (more correct?? we are already working with ints??)
//    avg = (num1) + (num2) / 2.0; //wrong this divides num2 before adding num 1
//    avg = (static_cast<float>(num1) + static_cast<float>(num2))/2.3; // could be correct
//    avg = (static_cast(num1) + static_cast(num2)) / 2.0; // wrong not casting correctly

    cout << avg << endl;

    return 0;
}
