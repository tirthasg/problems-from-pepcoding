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

int main()
{
    int number, base;
    cin >> number >> base;
    
    int result = AnyBaseToDecimal(number, base);
    cout << result << endl;
    
    return 0;
}