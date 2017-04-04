#include <iostream>
using namespace std;

void drawFrame(int n, int m)
{
    cout << endl;
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if (i == 1 || i == m)
                cout << "* ";
            else if (j == 1 || j == n)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

int main()
{
    int width, height;

    //Get width and height values of the rectangle
    cout << "Please enter the width and height of the rectangle separated by a space: ";
    cin >> width >> height;

    //draw the frame
    drawFrame(width, height);

    return 0;
}
