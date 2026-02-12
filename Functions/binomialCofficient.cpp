#include <iostream>
using namespace std;

int binomialCoefficient(int n, int r)
{
    int factOFN = 1, factOfR = 1, factOfDIFF = 1, diff = 0;
    // calculating the differnce of n and r
    diff = n - r;
    // to calculate factorial of n
    for (int i = 1; i <= n; i++)
    {
        factOFN = factOFN * i;
    }
    // to calculate factorial of r
    for (int i = 1; i <= r; i++)
    {
        factOfR *= i;
    }
    // to calucalte the factorail of diiff
    for (int i = 1; i <= diff; i++)
    {
        factOfDIFF *= i;
    }
    // calculatinf the coeff and returning it
    return factOFN / (factOfR * factOfDIFF);
}

int main()
{
    int n, r;
    cout << "Enter the value of N and R to calculate\n";
    cin >> n >> r;
    cout << "Binomial coefficient is :" << binomialCoefficient(n, r);
}