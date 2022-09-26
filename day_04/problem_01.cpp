#include <iostream>
using namespace std;

int main()
{    
    int N;
    cin >> N;

    int nst = N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= nst; j++)
            cout << "*\t";
        cout << endl;
    }

    return 0;
}