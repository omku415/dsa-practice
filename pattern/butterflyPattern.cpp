#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the length of the pattern\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < 2 * (n - i) - 2; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    // for bottom part
    for (int i = 0; i < n; i++)
    {
        for (int j = n-i; j > 0; j--)
        {
            cout << "*";
        }
        if (i != 0)
        {
            for (int j = 0; j < 2 * i; j++)
            {
                cout << " ";
            }
        }
        for (int j = n-i; j > 0; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}