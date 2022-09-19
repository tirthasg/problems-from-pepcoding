#include <iostream>
#include <utility>
using namespace std;

void ReverseArray(int arr[], int start, int end)
{
    while (start < end) {
        swap(arr[start], arr[end]);
        
        start++;
        end--;
    }
}

void RotateArray(int arr[], int N, int K)
{
    if (N == 0)
        return;
    
    K %= N;    
    if (K < 0)
        K += N;
        
    if (K == 0)
        return;
    
    ReverseArray(arr, 0, N - 1);
    ReverseArray(arr, 0, K - 1);
    ReverseArray(arr, K, N - 1);
}

void PrintArray(int arr[], int N)
{
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
        
    int K;
    cin >> K;
    
    RotateArray(arr, N, K);
    PrintArray(arr, N);

    delete [] arr;
    
    return 0;
}