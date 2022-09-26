#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    if ((N & 1) == 0)
        N++;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i == 1)
                if (j > N / 2 + 1 && j < N)
                    cout << "\t";
                else 
                    cout << "*\t";
            else if (i < N / 2 + 1)
                if (j == N / 2 + 1 || j == N)
                    cout << "*\t";
                else 
                    cout << "\t";
            else if (i == N / 2 + 1)
                cout << "*\t";
            else if (i < N)
                if (j == 1 || j == N / 2 + 1)
                    cout << "*\t";
                else 
                    cout << "\t";
            else 
                if (j > 1 && j < N / 2 + 1)
                    cout << "\t";
                else 
                    cout << "*\t";
        }
        cout << endl;
    }
    
    return 0;
}