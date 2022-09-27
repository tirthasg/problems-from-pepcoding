#include <iostream>
using namespace std;

int DecimalToAnyBase(int number, int base)
{
    int result = 0, digit, ten_power = 1;
    while (number != 0) {
        digit = number % base;
        number /= base;

        result += ten_power * digit;
        ten_power *= 10;
    }
    
    return result;
}

int main()
{
    int number, base;
    cin >> number >> base;
    
    int result = DecimalToAnyBase(number, base);
    cout << result << endl;
    
    return 0;
}