#include <iostream>
using namespace std;

int Add(int a, int b)
{
    return a + b;
}

int Subtract(int a, int b)
{
    return a - b;
}

int Power(int a, int b)
{
    int result = 1;
    while (b != 0) {
        if (b & 1)
            result *= a;
        
        a *= a;
        b >>= 1;
    }

    return result;
}

int main()
{
    int a, b;
    cin >> a >> b;

    int result = Add(a, b);
    cout << result << endl;

    result = Subtract(a, b);
    cout << result << endl;

    result = Power(a, b);
    cout << result << endl;

    return 0;
}