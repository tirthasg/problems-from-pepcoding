#include <iostream>
using namespace std;

void HorizontalBarChart(int arr[], int N)
{
    if (N <= 0) {
        cout << "Array is empty" << endl;
        return;
    } 

    cout << "Horizontal Bar Chart: " << endl;
    
    for (int i = 0; i < N; i++) {
        for (int j = 1; j <= arr[i]; j++)
            cout << "* ";
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

    HorizontalBarChart(arr, N);

    delete [] arr;

    return 0;
}