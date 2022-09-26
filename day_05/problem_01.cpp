#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int nsp = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= nsp; j++)
            cout << "\t";
        cout << "*" << endl;

        nsp++;
    }

    return 0;
}