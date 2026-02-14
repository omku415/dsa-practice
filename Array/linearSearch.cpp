#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int size = 5, arr[5], target;
    cout << "Enter the elemnet of array\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the target element\n";
    cin >> target;

    cout << linearSearch(arr, size, target);
}