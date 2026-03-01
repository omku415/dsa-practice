#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[10];
    cout << "Enter the length of array\n";
    cin >> n;
    cout << "Enter the lenght of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            for (int i = st; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << "\n";
    }
}