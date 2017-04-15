//Draws a tree
#include <iostream>
using namespace std;

void displayOneLine(int spacesP, int asterisksP)
{
    for (int i = 1; i <= spacesP; i++)
        cout << " ";
    for (int i = 1; i <= asterisksP; i++)
        cout << "* ";
    cout << endl;
}

int main( )
{
    int size;

    cout << "Enter the size of the tree: ";
    cin >> size;

    //the tree top
    cout << endl;
    for (int i = 1; i <= size; i++)
    displayOneLine(size - i,i);

    //the trunk
    displayOneLine(size - 1,1);
    displayOneLine(size - 1,1);

    return 0;
}
