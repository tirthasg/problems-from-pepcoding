#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int nst = 1, a = 0, b = 1, c;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= nst; j++) {
            cout << a << "\t";
            c = a + b;
            a = b;
            b = c;
        }
        cout << endl;

        nst++;
    }

    return 0;
}