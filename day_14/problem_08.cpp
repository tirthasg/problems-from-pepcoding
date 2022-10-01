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

void MatrixMultiplication(int **matrix1, int nrows1, int ncols1,
                          int **matrix2, int nrows2, int ncols2)
{
    if (nrows1 == 0 || ncols1 == 0 || nrows2 == 0 || ncols2 == 0)
        return;
    
    if (ncols1 != nrows2) {
        cout << "Invalid input" << endl;
        return;
    }
    
    int count = ncols1;
    for (int row = 0; row < nrows1; row++) {
        for (int col = 0; col < ncols2; col++) {
            int sum = 0;
            for (int k = 0; k < count; k++)
                sum += matrix1[row][k] * matrix2[k][col];
            cout << sum << " ";
        }
        cout << endl;
    }
}

int main()
{
    int nrows1, ncols1;
    cin >> nrows1 >> ncols1;
    
    int **matrix1 = new int*[nrows1];
    for (int row = 0; row < nrows1; row++) {
        matrix1[row] = new int[ncols1];
        for (int col = 0; col < ncols1; col++)
            cin >> matrix1[row][col];
    }
    
    int nrows2, ncols2;
    cin >> nrows2 >> ncols2;
    
    int **matrix2 = new int*[nrows2];
    for (int row = 0; row < nrows2; row++) {
        matrix2[row] = new int[ncols2];
        for (int col = 0; col < ncols2; col++)
            cin >> matrix2[row][col];
    }
    
    PrintMatrix(matrix1, nrows1, ncols1);
    PrintMatrix(matrix2, nrows2, ncols2);

    MatrixMultiplication(matrix1, nrows1, ncols1,
                         matrix2, nrows2, ncols2);
                         
    for (int row = 0; row < nrows1; row++)
        delete [] matrix1[row];
        
    delete [] matrix1;
    
    for (int row = 0; row < nrows2; row++)
        delete [] matrix2[row];
        
    delete [] matrix2;
    
    return 0;
}