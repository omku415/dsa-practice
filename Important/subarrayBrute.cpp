#include <iostream>
using namespace std;
#include <climits>
int main()
{
    int n;
    int arr[10];
    cout << "Enter the length of array\n";
    cin >> n;
    cout << "Enter the lenght of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxSum = INT_MIN;
    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            int currentSum = 0;
            for (int i = st; i <= end; i++)
            {
                currentSum = currentSum + arr[i];
                maxSum = max(currentSum, maxSum);
            }
        }
    }

    cout << "MAXIMUM SUBARRAY: " << maxSum;
}