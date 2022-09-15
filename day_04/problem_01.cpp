#include <iostream>
using namespace std;

int main()
{    
    int N;
    cin >> N;

    int i = 1, j;
    while (i <= N) {
        j = 1;
        while (j <= N) {
            cout << "*\t";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}