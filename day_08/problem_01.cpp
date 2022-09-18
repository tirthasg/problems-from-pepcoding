#include <iostream>
using namespace std;

int GetDigitFrequency(int num, int digit)
{   
    if (num == digit)
        return 1;

    int frequency = 0;
    while (num != 0) {
        if (digit == num % 10)
            frequency++;        
        num /= 10;
    }

    return frequency;
}

int main()
{
    int num, digit;
    cin >> num >> digit;

    cout << GetDigitFrequency(num, digit) << endl;

    return 0;
}