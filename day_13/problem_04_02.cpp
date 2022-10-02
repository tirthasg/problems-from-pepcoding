#include <iostream>
using namespace std;

int FirstIndex(int arr[], int N, int key)
{
    int start = 0;
    int end = N - 1;
    int result = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            result = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
            start = mid + 1;
        else 
            end = mid - 1;
    }
    
    return result;
}

int LastIndex(int arr[], int N, int key)
{
    int start = 0;
    int end = N - 1;
    int result = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            result = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
            start = mid + 1;
        else 
            end = mid - 1;
    }
    
    return result;
}


void FirstAndLastIndex(int arr[], int N, int key)
{
    int value = FirstIndex(arr, N, key);
    cout << value << endl;
    
    value = LastIndex(arr, N, key);
    cout << value << endl;
}

int main()
{
    int arr[] = {3, 4, 4, 5, 10, 11, 11, 11, 23, 23, 90};
    int N = sizeof(arr) / sizeof(arr[0]);
    
    int key;
    cin >> key;
    
    FirstAndLastIndex(arr, N, key);
    
    return 0;
}