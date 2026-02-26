#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number for which you want to check the power of two\n";
    cin >> n;
    //Here we are doing Bitwise & operation with n and n-1 if we do this the ans will be zero and the number should be greater than 0
    if (n > 0 && ((n & (n - 1)) == 0))
    {
        cout << "It is power of 2\n";
    }
    else
    {
        cout << " No It is  not a power of 2\n";
    }
    return 0;
}
