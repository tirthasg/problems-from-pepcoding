#include <iostream>
using namespace std;

void PrintMatrix(int matrix[][100], int nrows, int ncols)
{
    cout << "Elements of matrix row-wise: " << endl;
    for (int row = 0; row < nrows; row++) {
        for (int col = 0; col < ncols; col++)
            cout << matrix[row][col] << " ";
        cout << endl;
    }
}

int main()
{
    int matrix[100][100];

    int nrows, ncols;
    cin >> nrows >> ncols; 

    for (int row = 0; row < nrows; row++)
        for (int col = 0; col < ncols; col++)
            cin >> matrix[row][col];

    PrintMatrix(matrix, nrows, ncols);

    return 0;
}