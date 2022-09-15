#include <iostream>
using namespace std;

int main()
{
    int a = 23, b = 45, c = 12;

    if (b <= a && c <= a)
        cout << a;
    else if (a <= b && c <= b)
        cout << b;
    else 
        cout << c;
    cout << endl;

    return 0;
}