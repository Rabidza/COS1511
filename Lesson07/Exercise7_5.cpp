//Computer Punishment
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int repetitions;
    string message;

    cout << "Computer punishment" << endl;
    cout << "-------------------" << endl;

    cout << "Repetitions? ";
    cin >> repetitions;
    cin.get();
    cout << "Message? ";
    getline(cin, message, '\n');

    while (repetitions > 0)
    {
        cout << message << endl;
        repetitions--;
    }

    return 0;
}
