#include <iostream>
using namespace std;

void PrintArray(int arr[], int N)
{
    if (N <= 0)
        return;
        
    for (int i = 0; i < N; i++)
        if (i == 0 && arr[i] == 0)
            ;
        else 
            cout << arr[i] << " ";
    cout << endl;
}

void ArraySum(int arr1[], int N1, int arr2[], int N2, int arr[], int N) 
{
    int i = N1 - 1;
    int j = N2 - 1;
    int k = N - 1;
    
    int carry = 0;
    while (k >= 0) {
        int sum = 0;
        
        if (i >= 0)
            sum += arr1[i];
        
        if (j >= 0)
            sum += arr2[j];
        
        sum += carry;
        arr[k] = sum % 10;
        carry = sum / 10;
        
        i--;
        j--;
        k--;
    }
}

int main()
{
    int N1;
    cin >> N1;
    
    int *arr1 = new int[N1];
    for (int i = 0; i < N1; i++)
        cin >> arr1[i];
        
    int N2;
    cin >> N2;
    
    int *arr2 = new int[N2];
    for (int i = 0; i < N2; i++)
        cin >> arr2[i];
        
    int N3 = (N1 <= N2 ? N2 : N1) + 1;
    int *arr = new int[N3];
    
    ArraySum(arr1, N1, arr2, N2, arr, N3);
    PrintArray(arr, N3);

    delete [] arr1;
    delete [] arr2;
    delete [] arr;
    
    return 0;
}