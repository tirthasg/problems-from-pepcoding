#include <iostream>
#include <climits>
using namespace std;

int CeilInArray(int arr[], int N, int key)
{
    int start = 0;
    int end = N - 1;
    int result = INT_MAX;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
            return key;
        else if (arr[mid] < key)
            start = mid + 1;
        else {
            result = arr[mid];
            end = mid - 1;
        }
    }
    
    return result;
}

int FloorInArray(int arr[], int N, int key)
{
    int start = 0;
    int end = N - 1;
    int result = INT_MIN;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
            return key;
        else if (key < arr[mid])
            end = mid - 1;
        else {
            result = arr[mid];
            start = mid + 1;
        }
    }
    
    return result;
}

void CeilAndFloorInArray(int arr[], int N, int key)
{
    int value = FloorInArray(arr, N, key);
    cout << value << endl;
    
    value = CeilInArray(arr, N, key);
    cout << value << endl;
}

int main()
{
    int arr[] = {3, 5, 10, 11, 23, 90};
    int N = sizeof(arr) / sizeof(arr[0]);
    
    int key;
    cin >> key;
    
    CeilAndFloorInArray(arr, N, key);
    
    return 0;
}