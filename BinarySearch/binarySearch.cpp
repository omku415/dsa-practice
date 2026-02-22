#include <iostream>
using namespace std;

int binarySearch(int n, int arr[10], int target)
{
    int start = 0;
    int end = n - 1;
    int mid;
    while (start <= end)
    {
        //we are doing this because it can not give wrong value for large integer
        mid = start + (end - start) / 2;
        if (target == arr[mid])
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int n, arr[10], target;
    cout << "enter the size of array\n";
    cin >> n;
    cout << "Enter the elemnet of array in sorted order\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the target element\n";
    cin >> target;
    cout << "Index of found element is: " << binarySearch(n, arr, target);
}