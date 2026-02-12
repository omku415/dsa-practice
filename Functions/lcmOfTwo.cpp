#include <iostream>
using namespace std;

int powerOfTwo(int n1, int n2)
{
    int org1 = n1;
    int org2 = n2;
    int rem = 0;
    if (n1 < n2)
    {
        swap(n1, n2);
    }

    while (n2!=0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    int gcd = n1;
    return (org1 * org2) / gcd;
}
int main()
{
    int n1, n2;
    cout << "Enter the Two numbers for which you want to find the lcm\n";
    cin >> n1 >> n2;
    cout << "LCM IS: " << powerOfTwo(n1, n2);
}