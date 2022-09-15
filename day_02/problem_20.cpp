#include <iostream>
using namespace std;

int main()
{
    int num_rows;
    cin >> num_rows;

    int i = 1, j, val;
    while (i <= num_rows) {
        val = 1;
        j = 1;
        while (j <= i) {
            cout << val << " ";

            val = val * (i - j) / j;
            j++;
        }
        cout << endl;
        
        i++;
    }

    return 0;
}