#include <iostream>
using namespace std;

int *InverseArray(int arr[], int N)
{
    int *result = new int[N];
    for (int i = 0; i < N; i++)
        result[arr[i]] = i;
    
    return result;
}

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

int main()
{
    int N;
    cin >> N;
    
    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    int *inv_arr = InverseArray(arr, N);
    PrintArray(inv_arr, N);

    delete [] arr;
    delete [] inv_arr;
    
    return 0;
}