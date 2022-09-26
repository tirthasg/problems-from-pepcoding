#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int nst = 1;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= nst; j++)
            cout << "*\t";
        cout << endl;

        nst++;
    }

    return 0;
}