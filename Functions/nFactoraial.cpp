#include <iostream>
using namespace std;
int factOfN(int n)
{
    int fact = 1;
    for (int i = 1; i <=n; i++)
    {
        fact = fact* i;
    }
    return fact;
}
// main function
int main()
{
    int n;
    cout << "Enter the number till where you wnat to print the factorial\n";
    cin >> n;
    cout<<"FACTORIAL: "<<factOfN(n);
}