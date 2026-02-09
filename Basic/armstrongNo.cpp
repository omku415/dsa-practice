#include <iostream>
#include <math.h>
using namespace std;

bool armstrongNo(int n)
{
    int final = n;
    int dup = n, armst = 0;
    int count = 0;
    while (n != 0)
    {
        int rem = n % 10;
        count++;
        n = n / 10;
    }
    while (dup != 0)
    {
        int rem = dup % 10;
        armst = armst + pow(rem, count);
        dup = dup / 10;
    }
    return final == armst;
}

int main()
{
    int n;
    cout << "Enter the number for which you wnaaat to check armstrong\n";
    cin >> n;

    cout << armstrongNo(n);
}
