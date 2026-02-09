#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    return (a == 0 ? b : a);
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
int main()
{
    int n1, n2;
    cout << "Enter the two numbers\n";
    cin >> n1 >> n2;
    cout << "L.C.M is : " << lcm(n1, n2);
}