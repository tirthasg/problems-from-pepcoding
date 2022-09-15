#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if ((N & 1) == 0)
        N++;

    int i = 1, j, val;
    while (i <= N / 2 + 1) {
        j = 1;
        while (j <= N / 2 + 1 - i) {
            cout << "\t";
            j++;
        }

        val = i;
        j = 1;
        while (j <= i) {
            cout << val << "\t";
            val++;
            j++; 
        }

        val -= 2;
        j = 1;
        while (j <= i - 1) {
            cout << val << "\t";
            val--;
            j++;
        }
        cout << endl;
        i++;
    }

    i = 1;
    N -= N / 2 + 1;
    while (i <= N) {
        j = 1;
        while (j <= i) {
            cout << "\t";
            j++;
        }

        val = N - i + 1;
        j = 1;
        while (j <= N - i + 1) {
            cout << val << "\t";
            val++;
            j++;
        }

        val -= 2;
        j = 1;
        while (j <= N - i) {
            cout << val << "\t";
            val--;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}