#include <iostream>
using namespace std;

int AnyBaseToDecimal(int number, int base)
{
    int result = 0, digit, base_power = 1;
    while (number != 0) {
        digit = number % 10;
        number /= 10;
        
        result += base_power * digit;
        base_power *= base;
    }
    
    return result;
}

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

int BaseToBase(int number, int base1, int base2)
{
    int in_decimal = AnyBaseToDecimal(number, base1);
    int result = DecimalToAnyBase(in_decimal, base2);

    return result;
}

int main()
{
    int number, base1, base2;
    cin >> number >> base1 >> base2;
    
    int result = BaseToBase(number, base1, base2);
    cout << result << endl;
    
    return 0;
}