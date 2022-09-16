#include <iostream>
using namespace std;

int main()
{
    int N = 9;

    int i = 1, j, nsp = 0, nst = N;
    while (i <= N) {
        j = 1;
        while (j <= nsp) {
            cout << "\t";
            j++;
        }

        j = 1;
        while (j <= nst) {
            if (i > 1 && i <= N / 2)
                if (j == 1 || j == nst)
                    cout << "*\t";
                else
                    cout << "\t";
            else 
                cout << "*\t";
            j++;
        }
        cout << endl;

        if (i <= N / 2) {
            nsp++;
            nst -= 2;
        }
        else {
            nsp--;
            nst += 2;
        }

        i++;
    }

    return 0;
}