#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    if (N <= 0)
        ;
    else if (N == 1)
        cout << 0;
    else if (N == 2)
        cout << 0 << " " << 1;
    else {
        cout << 0 << " " << 1 << " ";
        
        int first = 0, second = 1, next;
        for (int i = 3; i <= N; i++) {
            next = first + second;
            cout << next << " ";

            first = second;
            second = next;
        }
    }
    cout << endl;

    return 0;
}