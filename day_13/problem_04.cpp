#include <iostream>
using namespace std;

int FirstIndexInArray(int arr[], int N, int value)
{
    int result = -1;
    
    int start = 0;
    int end = N - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        
        if (arr[mid] == value) {
            result = mid;
            end = mid - 1;
        }
        else if (arr[mid] < value)
            start = mid + 1;
        else
            end = mid - 1;
    }
    
    return result;
}

int LastIndexInArray(int arr[], int N, int value)
{
    int result = -1;
    
    int start = 0;
    int end = N - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        
        if (arr[mid] == value) {
            result = mid;
            start = mid + 1;
        }
        else if (arr[mid] < value)
            start = mid + 1;
        else
            end = mid - 1;
    }
    
    return result;
}

void FirstAndLastIndexInArray(int arr[], int N, int value)
{
    int first = FirstIndexInArray(arr, N, value);
    int last = LastIndexInArray(arr, N, value);
    
    cout << first << endl;
    cout << last << endl;
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
    
    FirstAndLastIndexInArray(arr, N, value);
    
    delete [] arr;

    return 0;
}