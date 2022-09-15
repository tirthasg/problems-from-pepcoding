#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int i = 1, j, first = 0, second = 1, next;
    while (i <= N) {
        j = 1;
        while (j <= i) {
            cout << first << "\t";
            next = first + second;
            first = second;
            second = next;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}