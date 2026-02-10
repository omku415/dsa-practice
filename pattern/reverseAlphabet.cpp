#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the length of pattern\n";
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        for (int j = i; j >=0; j--)
        {

            cout <<  char('A'+j )<< "";
        }

        cout << "\n";
    }
    return 0;
}