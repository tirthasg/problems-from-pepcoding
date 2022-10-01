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

void PrintMatrixSpirally(int **matrix, int nrows, int ncols)
{
    if (nrows == 0 || ncols == 0) {
        cout << "Matrix is empty" << endl;
        return;
    }

    cout << "Elements of matrix printed spirally: " << endl;
    
    int left = 0;
    int right = ncols - 1;
    int top = 0;
    int bottom = nrows - 1;
    while (left <= right && top <= bottom) {
        for (int col = left; col <= right; col++)
            cout << matrix[top][col] << " ";
        top++;

        for (int row = top; row <= bottom; row++)
            cout << matrix[row][right] << " ";
        right--;

        if (top <= bottom) {
            for (int col = right; col >= left; col--)
                cout << matrix[bottom][col] << " ";
            bottom--;
        }

        if (left <= right) {
            for (int row = bottom; row >= top; row--)
                cout << matrix[row][left] << " ";
            left++;
        }
    }
    cout << endl;
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
    PrintMatrixSpirally(matrix, nrows, ncols);

    for (int row = 0; row < nrows; row++)
        delete [] matrix[row];

    delete [] matrix;
    
    return 0;
}