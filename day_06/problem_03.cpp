#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int nst = 1, nsp = 2 * N - 3, val;
    for (int i = 1; i <= N; i++) {
        val = 1;
        for (int j = 1; j <= nst; j++) {
            cout << val << "\t";
            val++;
        }
        
        for (int j = 1; j <= nsp; j++)
            cout << "\t";
        
        if (i == N) {
            nst--;
            val--;
        }
        
        val--;
        for (int j = 1; j <= nst; j++) {
            cout << val << "\t";
            val--;
        }
        cout << endl;

        nst++;
        nsp -= 2;
    }

    return 0;
}