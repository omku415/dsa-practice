#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int matrix[4][3], maxi = INT_MIN;
    int rows = 4, column = 3;
    cout << "Enter the element of the 2-D array\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < column; j++)
        {
            sum = sum + matrix[i][j];
        }
        maxi = max(maxi, sum);
    }
    cout << "The maximum ROW sum is :" << maxi;
}