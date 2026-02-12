#include <iostream>
#include <math.h>
using namespace std;
int printPrime(int n)
{
    if (n == 1)
    {
        cout << "As n is not a prime SO give value above 1\n";
    }
for (int i = 2; i <= n; i++)
{
    bool isPrime = true;
    for (int j = 2; j < sqrt(i); j++)
    {
        if (i % j == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout << "Prime no are: " << i << "\n";
    }
}
}

int main()
{
    int n;
    cout << "enter the number where you wnat to print the prime no \n";
    cin >> n;
    printPrime(n);
}