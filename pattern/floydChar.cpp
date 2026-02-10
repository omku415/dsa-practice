#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the length of pattern\n";
    cin >> n;
    char count = 'A';
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {

            cout << count << " ";
            count++;
        }

        cout << "\n";
    }
}

