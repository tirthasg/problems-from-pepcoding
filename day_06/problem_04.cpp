#include <iostream>
using namespace std;

int main()
{
    int N = 7;

    int i = 1, j, nsp = N / 2, nst = 1;
    while (i <= N) {
        j = 1;
        while (j <= nsp) {
            if (i != N / 2 + 1)
                cout << "\t";
            else 
                cout << "*\t";
            j++;
        }

        j = 1;
        while (j <= nst) {
            cout << "*\t";
            j++;
        }
        cout << endl;

        if (i <= N / 2)
            nst++;
        else 
            nst--;

        i++;
    }

    return 0;
}