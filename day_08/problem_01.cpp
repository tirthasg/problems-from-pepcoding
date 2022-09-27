#include <iostream>
#include <cstdlib>
using namespace std;

int GetFrequency(int digit, int number)
{
    number = abs(number);
    
    if (digit == number)
        return 1;
        
    int frequency = 0;
    while (number != 0) {
        if (digit == number % 10)
            frequency++;
        
        number /= 10;
    }
    
    return frequency;
}

int main()
{
    int digit, number;
    cin >> digit >> number;
    
    int result = GetFrequency(digit, number);
    cout << result << endl;
    
    return 0;
}