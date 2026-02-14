#include <iostream>
using namespace std;

int reverseArray(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        // this is inbuilt function in c++ for swapping two element
        swap(arr[start], arr[end]);
        // here is an example how we can do by taking a temporaray variable and then swap it
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int arr[5], size = 5;

    cout << "Enter the element of the array\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    reverseArray(arr, size);
    cout << "the reversed array is\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}