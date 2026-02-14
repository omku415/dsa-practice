#include <iostream>
using namespace std;

int intersection(int arr1[], int arr2[], int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
}

int main()
{
    int arr1[100], arr2[100], size1, size2;
    cout << "Enter the size of the 1st array\n";
    cin >> size1;
    cout << "Enter the element  of 1st the array\n";
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the size of the 2nd  array\n";
    cin >> size2;
    cout << "Enter the element  of the 2nd  array\n";
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }
    intersection(arr1, arr2, size1, size2);
}