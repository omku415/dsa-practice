// This is the question
// *
// * *
// * * *
// * * * *
// * * * *

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of pattern\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << "\n";
    }
    return 0;
}