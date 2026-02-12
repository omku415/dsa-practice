#include <iostream>
using namespace std;
int decToBinary(int n)
{
    int ans = 0, rem = 0;
    int power = 1;
    while (n > 0)
    {
        // we are diving by 2 because when we are coverting decimal to binary we have to divide by 2
        rem = n % 2;               // through this we are finding the remainder
        ans = ans + (rem * power); // we have to print from lower to upper side while converting that why
        n = n / 2;                 // through this we ar finding the remainig part

        power = power * 10; // we ahve to update powe each time by 10 to make the digit backwards
    }

    cout << "Binary No is:" << ans << "\n";
}

int main()
{
    int n;
    cout << "Enter the number for which you want binary eqivalent\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        decToBinary(i);
    }
}