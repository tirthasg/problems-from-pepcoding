#include <iostream>
using namespace std;

void CeilAndFloorInArray(int arr[], int N, int value)
{
    int arr_ceil = -1;
    int arr_floor = -1;
    
    int start = 0;
    int end = N - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        
        if (arr[mid] == value) {
            arr_floor = arr_ceil = value;
            break;
        }
        else if (arr[mid] < value) {
            arr_floor = arr[mid];
            start = mid + 1;
        }
        else {
            arr_ceil = arr[mid];
            end = mid - 1;
        }
    }
    
    cout << arr_ceil << endl;
    cout << arr_floor << endl;
}

int main()
{
    int N;
    cin >> N;
    
    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
        
    int value;
    cin >> value;
    
    CeilAndFloorInArray(arr, N, value);

    delete [] arr;
    
    return 0;
}