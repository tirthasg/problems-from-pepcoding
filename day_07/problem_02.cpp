#include <iostream>
using namespace std;

int main()
{
    int N = 9;

    int i = 1, j;
    while (i <= N) {
        j = 1;
        while (j <= N) {
            if (i == 1) {
                if (j == 1 || j >= N / 2 + 1)
                    cout << "*\t";
                else 
                    cout << "\t";
            }
            else if (i <= N / 2) {
                if (j == 1 || j == N / 2 + 1)
                    cout << "*\t";
                else 
                    cout << "\t";
            }
            else if (i == N / 2 + 1) {
                cout << "*\t";
            }
            else if (i < N) {
                if (j == N / 2 + 1 || j == N)
                    cout << "*\t";
                else 
                    cout << "\t";
            }
            else {
                if (j <= N / 2 + 1 || j == N)
                    cout << "*\t";
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