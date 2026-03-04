#include <iostream>
using namespace std;
void printNum(int n)
{
    if (n == 1)
    {
        cout << "1" << " ";
        return;
    }
    cout << n << " ";
    printNum(n - 1);
}

int main()
{
    int n;
    cout << "Enter the last value of number\n";
    cin >> n;
    printNum(n);
}