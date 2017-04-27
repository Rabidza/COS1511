//Initialise a matrix and display the matrix
#include <iostream>
using namespace std;

const int N = 4;

void showMatrix(const int matrixP[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << matrixP[i][j] << " | ";
        cout << endl;
    }
}

int main()
{
    int matrix[][N] = {{1,2,1,2},{3,4,3,4},{5,6,5,6},{7,8,7,8}};

    showMatrix(matrix);

    return 0;
}
