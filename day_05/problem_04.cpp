#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if ((N & 1) == 0)
        N++;
    
    int nsp1 = N / 2, nsp2 = -1;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= nsp1; j++)
            cout << "\t";
        cout << "*\t";

        for (int j = 1; j <= nsp2; j++)
            cout << "\t";
        
        if (i != 1 && i != N)
            cout << "*";
        cout << endl;

        if (i <= N / 2) {
            nsp1--;
            nsp2 += 2;
        }
        else {
            nsp1++;
            nsp2 -= 2;
        }
    }
    
    return 0;
}