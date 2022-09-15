#include <iostream>
using namespace std;

int main()
{
    int marks;
    cin >> marks;

    if (90 < marks)
        cout << "excellent";
    else if (80 < marks && marks <= 90)
        cout << "good";
    else if (70 < marks && marks <= 80)
        cout << "fair";
    else if (60 < marks && marks <= 70)
        cout << "meets expectations";
    else 
        cout << "below par";
    cout << endl;

    return 0;
}