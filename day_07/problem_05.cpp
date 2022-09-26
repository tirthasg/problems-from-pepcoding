#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if ((N & 1) == 0)
        N++;

    int val;
    for (int i = 1; i <= N; i++) {
        if (i <= N / 2 + 1)
            val = N;
        else 
            val = 1;
        
        for (int j = 1; j <= N; j++) {
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
        }
        cout << endl;
    }

    return 0;
}