#include <iostream>
using namespace std;

int main()
{
    int matrix[100][100];

    int nrows, ncols;
    cin >> nrows >> ncols;

    for (int row = 0; row < nrows; row++)
        for (int col = 0; col < ncols; col++)
            cin >> matrix[row][col];

    cout << "Elements of matrix row-wise: " << endl;
    for (int row = 0; row < nrows; row++) {
        for (int col = 0; col < ncols; col++)
            cout << matrix[row][col] << " ";
        cout << endl;
    }

    cout << "Elements of matrix column-wise: " << endl;
    for (int col = 0; col < ncols; col++) {
        for (int row = 0; row < nrows; row++)
            cout << matrix[row][col] << " ";
        cout << endl;
    }

    return 0;
}