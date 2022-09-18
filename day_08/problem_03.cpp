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

int main()
{
    int num, base;
    cin >> num >> base;
    
    int result = BaseToDecimal(num, base);
    cout << result << endl;
    
    return 0;
}