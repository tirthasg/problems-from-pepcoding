#include <iostream>
#include <utility>
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

void ReverseSubArray(int arr[], int start, int end)
{
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void RotateArray(int arr[], int N, int K)
{
    if (N <= 0)
        return;
    
    K %= N;
    if (K == 0)
        return;

    if (K < 0)
        K += N;
    
    ReverseSubArray(arr, 0, N - 1);
    ReverseSubArray(arr, 0, K - 1);
    ReverseSubArray(arr, K, N - 1);
}

int main()
{
    int N;
    cin >> N;
    
    int *arr = new int[N]; 
    for (int i = 0; i < N; i++)
        cin >> arr[i];
        
    int K;
    cin >> K;
    
    PrintArray(arr, N);
    RotateArray(arr, N, K);
    PrintArray(arr, N);

    delete [] arr;
    
    return 0;
}