#include <iostream>
#include <algorithm>
using namespace std;

void DifferenceOfArrays(int arr1[], int N1, int arr2[], int N2, int arr3[], int N)
{
    int i = N1 - 1;
    int j = N2 - 1;
    int k = N - 1;
    int borrow = 0;
    while (k >= 0) {
        int diff = arr1[i] - borrow;
        if (j >= 0)
            diff -= arr2[j];
        
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        }
        else 
            borrow = 0;
            
        arr3[k] = diff;
        
        i--;
        j--;
        k--;
    }
}

void PrintDifferenceArray(int arr[], int N)
{
    if (N <= 0)
        return;
    
    int i = 0;
    while (arr[i] == 0)
        i++;
    
    while (i < N) {
        cout << arr[i] << " ";
        i++;
    }
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
        
    int N3 = max(N1, N2);
    int *arr3 = new int[N3];
    
    DifferenceOfArrays(arr1, N1, arr2, N2, arr3, N3);
    PrintDifferenceArray(arr3, N3);

    delete [] arr1;
    delete [] arr2;
    delete [] arr3;
    
    return 0;
}