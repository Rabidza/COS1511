#include <iostream>
#include <cmath>
using namespace std;

void printTabs(int startT, int rowT, int incrementT)
{
    cout << "NUMBER\t\t" << "SQUARE\t\t"  << "CUBE\t\t" << endl;
    int squareP, cubeP;

    for (int i = 1; i <= rowT; i++)
    {
        squareP = pow(startT, 2);
        cubeP = pow(startT, 3);
        cout << startT << "\t\t" << squareP << "\t\t" << cubeP << endl ;
        startT += incrementT;
    }
}

void selTabs(int startP, int rowP, int incrementP)
{
    if(incrementP < 1)
        incrementP = 1;

    printTabs(startP, rowP, incrementP);
}

int main()
{
    int start, rows, increment;

    cout << "Enter the starting value of the table" << endl;
    cin >> start;
    cout << "Enter the number of values to be displayed" << endl;
    cin >> rows;
    cout << "Enter the increment between the values" << endl;
    cin >> increment;

    cout << start << " " << rows << " " << increment << endl;
    selTabs(start, rows, increment);

    return 0;
}
