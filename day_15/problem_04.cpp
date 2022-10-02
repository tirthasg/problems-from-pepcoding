#include <iostream>
#include <utility>
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
    cout << endl;
}

void RotateMatrixAntiClockwise(int **matrix, int nrows, int ncols)
{
    if (nrows == 0 || ncols == 0)
        return;

    for (int row = 0; row < nrows; row++)
        for (int col = row + 1; col < ncols; col++)
            swap(matrix[row][col], matrix[col][row]);
    
    for (int col = 0; col < ncols; col++) {
        int start = 0;
        int end = nrows - 1;
        while (start < end) {
            swap(matrix[start][col], matrix[end][col]);
            start++;
            end--;
        }
    }
}

int main()
{
    int nrows, ncols;
    cin >> nrows;

    ncols = nrows;

    int **matrix = new int*[nrows];
    for (int row = 0; row < nrows; row++) {
        matrix[row] = new int[ncols];
        for (int col = 0; col < ncols; col++)
            cin >> matrix[row][col];
    }

    PrintMatrix(matrix, nrows, ncols);
    RotateMatrixAntiClockwise(matrix, nrows, ncols);
    PrintMatrix(matrix, nrows, ncols);

    for (int row = 0; row < nrows; row++)
        delete [] matrix[row];

    delete [] matrix;

    return 0;
}