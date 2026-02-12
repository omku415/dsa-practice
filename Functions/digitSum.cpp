#include <iostream>
using namespace std;

int digitSum(int n)
{
    int sum = 0;
    int lastDigit;
    while (n > 0)
    {
        lastDigit = n % 10;
        n = n / 10;
        sum = sum + lastDigit;
    }
    return sum;
}

int main()
{
    int num;
    cout << "Enter the digit for which you wnat to print sum\n";
    cin >> num;
    cout << "SUM :" << digitSum(num);
}