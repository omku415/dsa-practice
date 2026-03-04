#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int start, int end)
{
    int idx = start - 1;
    int pivot = arr[end];
    for (int j = start; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}
void quickSort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int pivIndex = partition(arr, start, end);
        quickSort(arr, start, pivIndex - 1);
        quickSort(arr, pivIndex + 1, end);
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array\n";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the element of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quickSort(arr, 0, n - 1);

    cout << "The sorted array after quick sort\n";
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
}