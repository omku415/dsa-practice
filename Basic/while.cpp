#include <iostream>
using namespace std;
int main()
{
    int i = 0, num;
    cout << "enter the value of number\n";
    cin >> num;
    while (i <= num)
    {
        cout << i << " ";
        i++;
    }
    cout << endl;
    return 0;
}