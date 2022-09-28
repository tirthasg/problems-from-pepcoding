#include <iostream>
using namespace std;

int AnyBaseAddition(int base, int number1, int number2)
{
    int result = 0, carry = 0, ten_power = 1;
    while (!(number1 == 0 && number2 == 0 && carry == 0)) {
        int ld1 = number1 % 10;
        int ld2 = number2 % 10;
        
        number1 /= 10;
        number2 /= 10;
        
        int sum = ld1 + ld2 + carry;
        result += ten_power * (sum % base);
        carry = sum / base;
        
        ten_power *= 10;
    }
    
    return result;
}

int main()
{
    int base, number1, number2;
    cin >> base >> number1 >> number2;
    
    int result = AnyBaseAddition(base, number1, number2);
    cout << result << endl;
    
    return 0;
}