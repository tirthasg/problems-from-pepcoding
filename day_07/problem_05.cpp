#include <iostream>
using namespace std;

int main()
{
    int N = 5;

    int i = 1, j, val;
    while (i <= N) {
        if (i <= N / 2 + 1)
            val = N;
        else 
            val = 1;
        j = 1;
        while (j <= N) {
            if (i == 1) {
                if (j == 1 || j >= N / 2 + 1) 
                    cout << val-- << "\t";
                else 
                    cout << "\t";
            }
            else if (i <= N / 2) {
                if (j == 1 || j == N / 2 + 1)
                    cout << val-- << "\t";
                else 
                    cout << "\t";
            }
            else if (i == N / 2 + 1)
                cout << val-- << "\t";
            else if (i < N) {
                if (j == N / 2 + 1 || j == N)
                    cout << val++ << "\t";
                else 
                    cout << "\t";
            }
            else {
                if (j <= N / 2 + 1 || j == N)
                    cout << val++ << "\t";
                else 
                    cout << "\t";
            }
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}