#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 2; i <= N; i++) {
        if (i == 2 || i == 3)
            cout << i << " ";
        else if (i % 2 == 0 || i % 3 == 0)
            ;
        else {
            int d;
            for (d = 5; d * d <= i; d += 6)
                if (i % d == 0 || i % (d + 2) == 0)
                    break;
            
            if (d * d > i)
                cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}