#include <iostream>
#include <climits>
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

int SaddlePriceOfMatrix(int **matrix, int nrows, int ncols)
{
    for (int row = 0; row < nrows; row++) {
        int column_of_smallest = 0;
        for (int col = 0; col < ncols; col++)
            if (matrix[row][col] < matrix[row][column_of_smallest])
                column_of_smallest = col;
        
        bool is_largest = true;
        for (int irow = 0; irow < nrows; irow++)
            if (matrix[row][column_of_smallest] < matrix[irow][column_of_smallest]) {
                is_largest = false;
                break;
            }
        
        if (is_largest)
            return matrix[row][column_of_smallest];
    }

    return INT_MIN;
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
    
    int price = SaddlePriceOfMatrix(matrix, nrows, ncols);
    if (price == INT_MIN)
        cout << "Saddle price of matrix doesn't exist" << endl;
    else 
        cout << "Saddle price of matrix is: " << price << endl;

    for (int row = 0; row < nrows; row++)
        delete [] matrix[row];

    delete [] matrix;

    return 0;
}