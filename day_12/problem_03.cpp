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

int *InverseOfArray(int arr[], int N)
{
    if (N <= 0)
        return;

    int *result = new int[N];
    for (int i = 0; i < N; i++)
        result[arr[i]] = i;
    
    return result;
}

int main()
{
    int N;
    cin >> N;
    
    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    PrintArray(arr, N);

    int *inv_arr = InverseOfArray(arr, N);
    PrintArray(inv_arr, N);

    delete [] arr;
    delete [] inv_arr;
    
    return 0;
}