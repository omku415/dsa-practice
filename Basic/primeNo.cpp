#include <iostream>
using namespace std;
int main()
{
    int num;
    bool isPrime = true;
    cout << "enter the number for which you have to check it is primr no\n";
    cin >> num;
    //here we ahve used i*1<=num because after a certain point the factors are repeating so we dont have to check all the factors we have to check only this  root num * root num =num we have to check till root num if it is true till there the it will not prime no.
    for (int i = 2; i*i <= num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << "it is prime no\n";
    }
    else
    {
        cout << "it is not a prime no\n";
    }

    return 0;
}
