#include <iostream>
using namespace std;

int AnyBaseSubtraction(int base, int number1, int number2)
{
    int result = 0, borrow = 0, ten_power = 1;
    while (number2 != 0) {
        int ld1 = number1 % 10;
        int ld2 = number2 % 10;

        if (borrow)
            ld2--;
        
        number1 /= 10;
        number2 /= 10;

        int diff = ld2 - ld1;
        if (diff < 0) {
            diff += base;
            borrow = 1;
        }
        else
            borrow = 0;
                     
        result += diff * ten_power;
        
        ten_power *= 10;
    }
    
    return result;
}

int main()
{
    int base, number1, number2;
    cin >> base >> number1 >> number2;
    
    int result = AnyBaseSubtraction(base, number1, number2);
    cout << result << endl;
    
    return 0;
}