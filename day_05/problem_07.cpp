#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int nst = 1, val;
    for (int i = 1; i <= N; i++) {
        val = 1;
        for (int j = 1; j <= nst; j++) {
            cout << val << "\t";
            val = val * (i - j) / j;
        }
        cout << endl;

        nst++;
    }

    return 0;
}