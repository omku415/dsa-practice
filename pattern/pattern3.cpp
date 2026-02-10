// This is the pattern we have to print
//  A B C D
//  A B C D
//  A B C D
//  A B C D
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of pattern\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= n; j++)
        {
            cout << ch << " ";
            ch += 1;
        }
        cout << "\n";
    }
    return 0;
}