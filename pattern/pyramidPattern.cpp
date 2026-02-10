#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "enter the length of pattern\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // to print spaces in pyramid pattern
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // to print the first part of pattern
        for (int j = 0; j <= i; j++)
        {
            cout << (j + 1);
        }
        // to print the second part of pattern
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << "\n";
    }
    return 0;
}