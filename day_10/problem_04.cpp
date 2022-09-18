#include <iostream>
using namespace std;

int GetArraySpan(int arr[], int N)
{
    if (!N)
        return 0;
    
    int largest = arr[0], smallest = arr[0];
    for (int i = 1; i < N; i++)
        if (largest < arr[i])
            largest = arr[i];
        else if (arr[i] < smallest)
            smallest = arr[i];
    
    return largest - smallest;
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int result = GetArraySpan(arr, N);
    cout << result << endl;

    return 0;
}