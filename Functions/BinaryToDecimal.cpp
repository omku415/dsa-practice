#include <iostream>
using namespace std;
int binaryToDec(int n)
{
    int power = 1, rem = 0, ans = 0;
    while (n > 0)
    {
        rem = n % 10;
        ans = ans + (rem * power);
        n = n / 10;
        power = power * 2;
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter the binary nuber for which you wnat to find decimal\n";
    cin >> n;
    cout<<binaryToDec(n);
}