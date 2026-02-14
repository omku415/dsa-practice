#include <iostream>
using namespace std;

int uniqueElement(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
        {
            cout << arr[i]<<" ";
        }
    }
}

int main()
{
    int size, arr[100];
    cout << "Enter the size of the array\n";
    cin >> size;
    cout << "Enter the elemnt of array\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    uniqueElement(arr, size);
}