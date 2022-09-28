#include <iostream>
using namespace std;

int AnyBaseAddition(int base, int number1, int number2)
{
    int result = 0, carry = 0, ten_power = 1;
    while (!(number1 == 0 && number2 == 0 && carry == 0)) {
        int ld1 = number1 % 10;
        int ld2 = number2 % 10;
        
        int sum = ld1 + ld2 + carry;
        result += (sum % base) * ten_power;
        carry = sum / base;
        
        number1 /= 10;
        number2 /= 10;
        ten_power *= 10;
    }
    
    return result;
}

int AnyBaseMultiplicationByDigit(int base, int number1, int ld2)
{
    int result = 0, carry = 0, ten_power = 1;
    while (!(number1 == 0 && carry == 0)) {
        int ld1 = number1 % 10;
        int prod = ld1 * ld2 + carry;
        
        result += (prod % base) * ten_power;
        carry = prod / base;
        
        number1 /= 10;
        ten_power *= 10;
    }
    
    return result;
}

int AnyBaseMultiplication(int base, int number1, int number2)
{
    int result = 0, ten_power = 1;
    while (number2 > 0) {
        int ld2 = number2 % 10;
        int partial_prod = AnyBaseMultiplicationByDigit(base, number1, ld2) * ten_power;

        result = AnyBaseAddition(base, result, partial_prod);
        
        number2 /= 10;
        ten_power *= 10;
    }
    
    return result;
}

int main()
{
    int base, number1, number2;
    cin >> base >> number1 >> number2;
    
    int result = AnyBaseMultiplication(base, number1, number2);
    cout << result << endl;
    
    return 0;
}