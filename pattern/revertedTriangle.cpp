#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the length of the pattern\n";
    cin >> num;
    for (int i = 0; i <num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < num - i; j++)
        {
            cout << (i + 1);
        }
        cout<<"\n";
    }
    return 0;
}
