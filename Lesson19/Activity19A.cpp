//Raises one number to an integer power
#include <iostream>
using namespace std;

float iPow(float x, int n)
{
    float answer;
    answer = 1;
    for (int i = 1; i <= n; i++)
        answer *= x;
    return answer;
}

int main()
{
    float x1, x2, answer1, answer2, sum;
    int n1, n2;

    cout << "Enter a number and a non-negative integer: ";
    cin >> x1 >> n1;
    cout << "Enter a number and a non-negative integer: ";
    cin >> x2 >> n2;

    answer1 = iPow(x1, n1);
    answer2 = iPow(x2, n2);
    sum = answer1 + answer2;

    cout << "The sum of " << endl;
    cout << x1 << " to the power " << n1 << " and " << endl;
    cout << x2 << " to the power " << n2 << " is " << endl;
    cout << sum << endl;

    return 0;
}
