#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> arr, int n)
{

    if (n == 0 || n == 1)
    {
        return true;
    }
    return arr[n - 1] >= arr[n - 2] && isSorted(arr, n - 1);
}

int main()
{
    int n;

    cout << "Enter the size of the array\n";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elemnet of the vector\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << isSorted(arr, n);
}