#include <iostream>
using namespace std;

int main()
{
    int N = 5;

    int i = 1, j, val = 1;
    char ch = 'A';
    while (i <= N) {
        j = 1;
        while (j <= i) {
            cout << ch << val << "\t";
            ch++;
            val++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}