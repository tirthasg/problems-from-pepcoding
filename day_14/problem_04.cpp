#include <iostream>
using namespace std;

void PrintMatrix(int **matrix, int nrows, int ncols)
{
    if (nrows == 0 || ncols == 0) {
        cout << "Matrix is empty" << endl;
        return;
    }

    cout << "Elements of matrix row-wise: " << endl;
    for (int row = 0; row < nrows; row++) {
        for (int col = 0; col < ncols; col++)
            cout << matrix[row][col] << " ";
        cout << endl;
    }
}

int main()
{
    int nrows, ncols;
    cin >> nrows >> ncols;

    int **matrix = new int*[nrows];
    for (int row = 0; row < nrows; row++) {
        matrix[row] = new int[ncols];
        for (int col = 0; col < ncols; col++)
            cin >> matrix[row][col];
    }

    PrintMatrix(matrix, nrows, ncols);

    for (int row = 0; row < nrows; row++)
        delete [] matrix[row];

    delete [] matrix;

    return 0;
}