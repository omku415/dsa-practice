#include <iostream>
#include <math.h>
using namespace std;

int poweOfTwo(int n)
{
    if (n < 0)
    {
        cout << "give greater than 1\n";
        return false;
    }
    while (n > 1)
    {
        if (n % 2 != 0)
        {
            return false;
        }
        n = n / 2;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter the number for which we have to check power of 2\n";
    cin >> n;
    if (poweOfTwo(n))
    {
        cout << "it is powerof two\n";
    }
    else
    {
        cout << "it is not a power of two\n";
    }
    return 0;
}