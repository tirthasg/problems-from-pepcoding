#include <iostream>
using namespace std;

int BaseToDecimal(int num, int base)
{
    int result = 0, digit, base_power = 1;
    while (num != 0) {
        digit = num % 10;
        result += digit * base_power;
        
        base_power *= base;
        num /= 10;
    }
    
    return result;
}

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

int BaseToBase(int num, int base1, int base2)
{
    int in_decimal = BaseToDecimal(num, base1);
    int result = DecimalToBase(in_decimal, base2);

    return result;
}

int main()
{
    int num, base1, base2;
    cin >> num >> base1 >> base2;
    
    int result = BaseToBase(num, base1, base2);
    cout << result << endl;
    
    return 0;
}