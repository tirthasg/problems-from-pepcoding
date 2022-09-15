#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int total_digits = 0;
    if (!num)
        total_digits = 1;
    else
        while (num != 0) {
            total_digits++;
            num /= 10;
        }
    
    cout << total_digits << endl;

    return 0;
}