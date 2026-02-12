#include <iostream>
using namespace std;
int sumOfN(int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
// main function
int main()
{
    int n;
    cout << "Enter the number till where you wnat to print the sum\n";
    cin >> n;
    cout<<"SUM: "<<sumOfN(n);
}