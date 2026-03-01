#include <iostream>
using namespace std;
#include <climits>
int main()
{
    int n;
    int arr[10];
    cout << "Enter the length of array\n";
    cin >> n;
    cout << "Enter the element of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxSum = INT_MIN;
    for (int st = 0; st < n; st++)
    {
        int currentSum = 0;
        for (int end = st; end < n; end++)
        {
            currentSum += arr[end];
            maxSum = max(currentSum, maxSum);
        }
    }
    cout << "Maximum: " << maxSum << "\n";
}