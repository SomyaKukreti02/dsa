#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num)
{
    int originalNum = num;
    int sum = 0;
    int n = 0;

    // no of digits
    while (originalNum != 0)
    {
        n++;
        originalNum /= 10;
    }
    originalNum = num;

    // power of digits
    while (originalNum != 0)
    {
        int digit = originalNum % 10;
        sum += pow(digit, n);
        originalNum /= 10;
    }
    return sum == num;
}
int main()
{
    int number;
    cout << "enter a number";
    cin >> number;

    if (isArmstrong(number))
    {
        cout << number << "is an armstrong number" << endl;
    }
    else
    {
        cout << number << "is not an armstrong" << endl;
    }
    return 0;
}
