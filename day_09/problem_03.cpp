#include <iostream>
using namespace std;

int AnyBaseSubtraction(int base, int num1, int num2)
{
    int result = 0, borrow = 0, ten_power = 1;
    while (num2 > 0) {
        int ld1 = num1 % 10;
        int ld2 = num2 % 10;
        if (borrow)
            ld2--;
        
        int diff = ld2 - ld1;
        if (diff < 0) {
            diff += base;
            borrow = 1;
        }
        else
            borrow = 0;
            
        result += diff * ten_power;

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
    
    int result = AnyBaseSubtraction(base, num1, num2);
    cout << result << endl;
    
    return 0;
}