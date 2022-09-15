#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int num;
    while (t != 0) {
        cin >> num;

        if (num <= 1)
            cout << "Ordinary number";
        else if (num == 2 || num == 3)
            cout << "Prime number";
        else if (num % 2 == 0 || num % 3 == 0)
            cout << "Ordinary number";
        else {
            int d;
            for (d = 5; d * d <= num; d += 6)
                if (num % d == 0 || num % (d + 2) == 0) 
                    break;
            
            if (d * d > num)
                cout << "Prime number";
            else 
                cout << "Ordinary number";
        }
        cout << endl;

        t--;
    }

    return 0;
}