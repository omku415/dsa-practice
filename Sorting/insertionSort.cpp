#include <iostream>
#include <vector>
using namespace std;
void insertionSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i], previous = i - 1;
        while (previous >= 0 && arr[previous] > current)
        {
            arr[previous + 1] = arr[previous];
            previous--;
        }
        arr[previous + 1] = current;
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array\n";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the array for which you want to sort the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array before sorting\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    insertionSort(arr, n);
    cout << "Array after sorting\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}