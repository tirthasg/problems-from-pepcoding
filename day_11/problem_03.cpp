#include <iostream>
using namespace std;

void VerticalBarChart(int arr[], int N)
{
    if (N <= 0) {
        cout << "Array is empty" << endl;
        return;
    }

    cout << "Vertical Bar Chart: " << endl;
    
    int largest = arr[0];
    for (int i = 1; i < N; i++)
        if (largest < arr[i])
            largest = arr[i];

    for (int i = largest; i >= 1; i--) {
        for (int j = 0; j < N; j++)
            if (i <= arr[j])
                cout << "*\t";
            else 
                cout << "\t";
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

    VerticalBarChart(arr, N);

    delete [] arr;

    return 0;
}