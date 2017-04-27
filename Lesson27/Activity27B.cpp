// Rearrange the title of a book if it starts with "The "
#include <iostream>
using namespace std;

int main()
{
    string title, newTitle;

    cout << "Enter the title: ";
    getline(cin, title, '\n');

    if (title.substr(0,4) == "The ")
    {
        newTitle = title.substr(4) + ", The";
        cout << newTitle << endl;
    }
    else
        cout << "Title unchanged";

    return 0;
}
