#include <iostream>
using namespace std;

void PrintSubArrays(int arr[], int N)
{
    if (N <= 0)
        return;
    
    for (int i = 0; i < N; i++)
        for (int j = i; j < N; j++) {
            for (int k = i; k <= j; k++)
                cout << arr[k] << " ";
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
        
    PrintSubArrays(arr, N);

    delete [] arr;
    
    return 0;
}