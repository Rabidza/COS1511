#include <iostream>
using namespace std;

    const double EUROEXCHANGE = 0.1206;
    const double DOLLAREXCHANGE = 0.1073;
    const double POUNDEXCHANGE = 0.0124;

void test(float one, float two, float three)
{
    cout << "Test with 3 variables";
}

void test(float one, float two, float three, float four)
{
    cout << "Test with 4 variables";
}

int main()
{
    test(1, 2, 3, 4);
    test(1, 2, 3);
}
