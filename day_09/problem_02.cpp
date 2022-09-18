#include <iostream>
using namespace std;

int AnyBaseAddition(int base, int num1, int num2)
{
    int result = 0, carry = 0, ten_power = 1;
    while (!(num1 == 0 && num2 == 0 && carry == 0)) {
        int ld1 = num1 % 10;
        int ld2 = num2 % 10;
        
        int sum = ld1 + ld2 + carry;
        result += (sum % base) * ten_power;
        carry = sum / base;
        
        num1 /= 10;
        num2 /= 10;
        ten_power *= 10;
    }
    
    return result;
}

int main()
{
    int base, num1, num2;
    cin >> base >> num1 >> num2;
    
    int result = AnyBaseAddition(base, num1, num2);
    cout << result << endl;
    
    return 0;
}