#include <iostream>
using namespace std;

int BinarySearch(int arr[], int N, int key)
{
    int start = 0;
    int end = N - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            start = mid + 1;
        else 
            end = mid - 1;
    }

    return -1;
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int key;
    cin >> key;

    int index = BinarySearch(arr, N, key);
    cout << index << endl;

    delete [] arr;

    return 0;
}