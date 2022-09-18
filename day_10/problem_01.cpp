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

int AnyBaseMultiplicationByDigit(int base, int num1, int ld2)
{
    int result = 0, carry = 0, ten_power = 1;
    while (!(num1 == 0 && carry == 0)) {
        int ld1 = num1 % 10;
        int prod = ld1 * ld2 + carry;
        
        result += (prod % base) * ten_power;
        carry = prod / base;
        
        num1 /= 10;
        ten_power *= 10;
    }
    
    return result;
}

int AnyBaseMultiplication(int base, int num1, int num2)
{
    int result = 0, ten_power = 1;
    while (num2 > 0) {
        int ld2 = num2 % 10;
        int partial_prod = AnyBaseMultiplicationByDigit(base, num1, ld2) * ten_power;

        result = AnyBaseAddition(base, result, partial_prod);
        
        num2 /= 10;
        ten_power *= 10;
    }
    
    return result;
}

int main()
{
    int base, num1, num2;
    cin >> base >> num1 >> num2;
    
    int result = AnyBaseMultiplication(base, num1, num2);
    cout << result << endl;
    
    return 0;
}