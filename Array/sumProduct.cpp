#include <iostream>
using namespace std;
int SumProduct(int arr[], int size)
{
    int sum = 0, prod = 1;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
        prod = prod * arr[i];
    }
    cout << "The sum is :" << sum << "\n";
    cout << "The product is:" << prod << "\n";
}

int main()
{
    int size, arr[100];
    cout << "Enter the size of the array\n";
    cin >> size;
    cout << "Enter the elemnet of the array\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    SumProduct(arr, size);
}