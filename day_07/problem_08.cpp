#include <iostream>
using namespace std;

int main()
{
    int N = 7;

    int i = 1, j, nst = N / 2 + 1, nsp = 1, val;
    char ch = 'A';
    while (i <= N) {
        val = 1;
        j = 1;
        while (j <= nst) {
            if (i & 1)
                cout << ch++ << "\t";
            else 
                cout << val++ << "\t";
            j++;
        }

        j = 1;
        while (j <= nsp) {
            cout << "\t";
            j++;
        }

        val--;
        j = 1;
        while (j <= nst) {
            if (i & 1)
                cout << ch++ << "\t";
            else 
                cout << val-- << "\t";
            j++;
        }
        cout << endl;

        if (i <= N / 2) {
            nst--;
            nsp += 2;
        }
        else {
            nst++;
            nsp -= 2;
        }

        i++;
    }

    return 0;
}