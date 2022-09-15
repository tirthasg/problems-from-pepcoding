#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int i = 1, j;
    while (i <= N) {
        j = 1;
        while (j <= N - i) {
            cout << "\t";
            j++;
        }

        j = 1;
        while (j <= i) {
            cout << "*\t";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}