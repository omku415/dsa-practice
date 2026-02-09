#include <iostream>
using namespace std;
int main()
{
    int num, sum=0;
    cout << "enter the number till where you want to print" << endl;
    cin >> num;
    for (int i = 2; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    cout << sum << endl;
    return 0;
}