#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int> &arr, int start, int mid, int end)
{
    vector<int> temp;
    int i = start;
    int j = mid + 1;
    int invCount = 0;
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
            invCount += (mid - i + 1);
            
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
    return invCount;
}

int mergeSort(vector<int> &arr, int start, int end)
{

    if (start < end)
    {
        int mid = start + (end - start) / 2;
        int leftCount = mergeSort(arr, start, mid);    // left half
        int rightCount = mergeSort(arr, mid + 1, end); // right half
        int invCount = merge(arr, start, mid, end);    // merging call

        return leftCount + rightCount + invCount;
    }
    return 0;
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

    int ans = mergeSort(arr, 0, n - 1);

    cout << "Ans: " << ans << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}