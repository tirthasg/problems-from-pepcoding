#include <iostream>
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

void PrintSubArrays(int arr[], int N)
{
    if (N <= 0)
        return;
    
    for (int start = 0; start < N; start++)
        for (int end = start; end < N; end++) {
            for (int i = start; i <= end; i++)
                cout << arr[i] << " ";
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
    PrintSubArrays(arr, N);

    delete [] arr;
    
    return 0;
}