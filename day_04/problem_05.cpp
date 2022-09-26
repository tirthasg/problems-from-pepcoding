#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if ((N & 1) == 0)
        N++;
    
    int nsp = N / 2, nst = 1;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= nsp; j++)
            cout << "\t";
        
        for (int j = 1; j <= nst; j++)
            cout << "*\t";
        cout << endl;

        if (i <= N / 2) {
            nsp--;
            nst += 2;
        }
        else {
            nsp++;
            nst -= 2;
        }
    }
    
    return 0;
}