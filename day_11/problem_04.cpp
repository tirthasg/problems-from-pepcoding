#include <iostream>
#include <algorithm>
using namespace std;

void SumOfArrays(int arr1[], int N1, int arr2[], int N2, int arr3[], int N3) 
{
    int i = N1 - 1;
    int j = N2 - 1;
    int k = N3 - 1;
    int carry = 0;
    while (k >= 0) {
        int sum = carry;
        if (i >= 0)
            sum += arr1[i];
        if (j >= 0)
            sum += arr2[j];
        
        arr3[k] = sum % 10;
        carry = sum / 10;
        
        i--;
        j--;
        k--;
    }
}

void PrintSumArray(int arr[], int N)
{
    if (N <= 0)
        return;
        
    for (int i = 0; i < N; i++)
        if (i == 0 && arr[i] == 0)
            continue;
        else 
            cout << arr[i] << " ";
    cout << endl;
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
        
    int N3 = max(N1, N2) + 1;
    int *arr3 = new int[N3];
    
    SumOfArrays(arr1, N1, arr2, N2, arr3, N3);
    PrintSumArray(arr3, N3);

    delete [] arr1;
    delete [] arr2;
    delete [] arr3;
    
    return 0;
}