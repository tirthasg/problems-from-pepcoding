#include <iostream>
#include <cmath>
using namespace std;

void PrintArraySubsets(int arr[], int N)
{   
    int count = pow(2, N);
    for (int i = 0; i < count; i++) {
        int pos = count >> 1;
        for (int j = 0; j < N; j++) {
            if (i & pos)
                cout << arr[j] << "\t";
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
        
    PrintArraySubsets(arr, N);

    delete [] arr;
    
    return 0;
}