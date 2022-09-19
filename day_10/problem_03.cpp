#include <iostream>
using namespace std;

int GetArraySum(int arr[], int N)
{
    int sum = 0;
    for (int i = 0; i < N; i++)
        sum += arr[i];

    return sum;
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    int result = GetArraySum(arr, N);
    cout << result << endl;

    delete [] arr;

    return 0;
}