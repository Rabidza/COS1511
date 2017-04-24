// Excercise 8.2 ii
#include <iostream>
using namespace std;

int main()
{
    int age;
    float parentSalary, pocketMoney;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter salary: ";
    cin >> parentSalary;


    if (age < 13)
    {
        pocketMoney += parentSalary / 20;
    }
    else
    {
        pocketMoney += parentSalary / 10;
    }

    cout << pocketMoney;

    return 0;
}
