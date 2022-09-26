#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if ((N & 1) == 0)
        N++;

    int nsp = N / 2, nst = 1, oval = 1, val;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= nsp; j++)
            cout << "\t";
        
        val = oval;
        for (int j = 1; j <= nst; j++) {
            cout << val << "\t";
            if (j <= nst / 2)
                val++;
            else 
                val--;
        }
        cout << endl;

        if (i <= N / 2) {
            nsp--;
            nst += 2;
            oval++;
        }
        else {
            nsp++;
            nst -= 2;
            oval--;
        }
    }

    return 0;
}