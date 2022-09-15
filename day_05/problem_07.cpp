#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int i = 1, j, val;
    while (i <= N) {
        val = 1;
        j = 1;
        while (j <= i) {
            cout << val << "\t";
            val = val * (i - j) / j;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}