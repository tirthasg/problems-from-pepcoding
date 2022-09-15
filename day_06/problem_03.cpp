#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int i = 1, j, val;
    while (i <= N - 1) {
        val = 1;
        j = 1;
        while (j <= i) {
            cout << val << "\t";
            val++;
            j++; 
        }

        j = 1;
        while (j <= 2 * (N - i) - 1) {
            cout << "\t";
            j++;
        }

        j = 1;
        while (j <= i) {
            cout << i - j + 1 << "\t";
            j++;
        }
        cout << endl;
        i++;
    }

    j = 1;
    while (j <= N) {
        cout << j << "\t";
        j++;
    }

    j -= 2;
    while (j > 0) {
        cout << j << "\t";
        j--;
    }
    cout << endl;

    return 0;
}