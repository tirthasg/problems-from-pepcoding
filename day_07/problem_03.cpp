#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    if ((N & 1) == 0)
        N++;
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++)
            if (j == 1 || j == N || ((i > N / 2) && (i - j == 0 || i + j == N + 1)))
                cout << "*\t";
            else 
                cout << "\t";
        cout << endl;
    }
    
    return 0;
}