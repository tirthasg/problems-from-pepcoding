#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if ((N & 1) == 0)
        N++;
    
    int i = 1, j;
    while (i <= N / 2) {
        j = 1;
        while (j <= N / 2 - i + 1) {
            cout << "\t";
            j++;
        }
        
        j = 1;
        while (j <= 2 * i - 1) {
            cout << "*\t";
            j++;
        }
        cout << endl;
        i++;
    }
    
    i = 1;
    N -= N / 2;
    while (i <= N) {
        j = 1;
        while (j <= i - 1) {
            cout << "\t";
            j++;
        }
        
        j = 1;
        while (j <= 2 * (N - i) + 1) {
            cout << "*\t";
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}