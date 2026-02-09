#include <iostream>
using namespace std;

int reverseOfInteger(int n)
{
    int revInt = 0;
    int rem = 0;
    while (n > 0)
    {
        rem = n % 10;
        revInt = (revInt * 10) + rem;
        n = n / 10;
    }
    return revInt;
}

int main()
{
    int n;
    cout << "enter the number\n";
    cin >> n;
    cout << "Reverse integer is : " << reverseOfInteger(n);
}