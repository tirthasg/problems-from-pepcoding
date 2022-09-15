#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int rev_num = 0, digit;
    while (num != 0) {
        digit = num % 10;
        rev_num = rev_num * 10 + digit;

        num /= 10;
    }
    cout << rev_num << endl;

    return 0;
}