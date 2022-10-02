#include <iostream>
#include <cmath>
using namespace std;

void PrintArray(int arr[], int N)
{
    if (N <= 0) {
        cout << "Array is empty" << endl;
        return;
    }

    cout << "Elements of array: ";
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int power(int base, int exponent)
{
    if (base == 0 || exponent == 1)
        return base;

    int result = 1;
    while (exponent != 0) {
        if (exponent & 1)
            result *= base;

        base *= base;
        exponent >>= 1;
    }

    return result;
}

void PrintArraySubsets(int arr[], int N)
{   
    if (N <= 0)
        return;
        
    int num_rows = power(2, N);
    for (int row = 0; row < num_rows; row++) {
        int pos = num_rows >> 1;
        for (int i = 0; i < N; i++) {
            if (row & pos)
                cout << arr[i] << "\t";
            else 
                cout << "-\t";
            pos >>= 1;
        }
        cout << endl;
    }
}

int main()
{
    int N;
    cin >> N;
    
    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    PrintArray(arr, N);
    PrintArraySubsets(arr, N);

    delete [] arr;
    
    return 0;
}