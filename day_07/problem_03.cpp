#include <iostream>
using namespace std;

int main()
{
    int N = 7;

    int i = 1, j;
    while (i <= N) {
        j = 1;
        while (j <= N) {
            if (j == 1 || 
                j == N || 
                ((i >= N / 2 + 1) && (i - j == 0 || i + j == N + 1)))
                cout << "*\t";
            else
                cout << "\t";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}