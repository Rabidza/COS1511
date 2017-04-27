// Snoepie's Spaza Shop register
#include <iostream>
using namespace std;

int main()
{
    float prices[] = {4.90, 5.45, 5.45, 7.95, 1.10, 1.10, 1.85, 2.65,
                      2.65, 2.65, 1.85, 10.35, 4.50, 4.50, 11.25, 6.20};
    int code;
    float total = 0;

    cout << "Enter the item codes, -1 to end:" << endl;
    cin >> code;

    cout.setf(ios::fixed);
    cout.precision(2);

    while (code != -1)
    {
        cout << "\tR" << prices[code] << endl;
        total += prices[code];
        cin >> code;
    }

    cout << "Total: R" << total << endl;



    return 0;
}
