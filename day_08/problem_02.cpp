#include <iostream>
using namespace std;

int DecimalToBase(int num, int base)
{
    int result = 0, digit, ten_power = 1;
    while (num != 0) {
        digit = num % base;
        result += ten_power * digit;
        
        ten_power *= 10;
        num /= base;
    }
    
    return result;
}

int main()
{
    int num, base;
    cin >> num >> base;
    
    int result = DecimalToBase(num, base);
    cout << result << endl;
    
    return 0;
}