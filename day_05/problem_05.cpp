#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int i = 1, j, val = 1;
    while (i <= N) {
        j = 1;
        while (j <= i) {
            cout << val << "\t";
            val++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}