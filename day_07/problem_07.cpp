#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int nst = 1, val = 1;
    char ch = 'A';
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= nst; j++) {
            cout << ch << val << "\t";
            ch++;
            val++;
        }
        cout << endl;

        nst++;
    }

    return 0;
}