#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end)
{
    vector<int> temp;
    int i = start;
    int j = mid + 1;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[idx + start] = temp[idx];
    }
}

void mergeSort(vector<int> &arr, int start, int end)
{

    if (start < end)
    {
        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);   // left half
        mergeSort(arr, mid + 1, end); // right half
        merge(arr, start, mid, end);  // merging call
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

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}