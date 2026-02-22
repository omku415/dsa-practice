#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int matrix[3][3];
    int sum = 0, ssum = 0;
    int rows = 3, column = 3;
    cout << "Enter the element of the 2-D array\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // for primary diagonal..
    for (int i = 0; i < rows; i++)
    {
        // time complexity O(n^2)
        // for (int j = 0; j < column; j++)
        // {
        //     if (i == j)
        //     {
        //         sum = sum + matrix[i][j];
        //     }
        //     //for secondary diagonal
        //     else if (j == column - 1 - i)
        //     {
        //         sum = sum + matrix[i][j];
        //     }
        // }
        sum = sum + matrix[i][i];
        if (i != column - 1 - i)
        {
            sum = sum + matrix[i][column - 1 - i];
        }
    }
    // // for seconary diagonal
    // for (int i = 0; i < rows; i++)
    // {

    //     for (int j = column - 1; j <= 0; j--)
    //     {

    //         ssum = ssum + matrix[i][j];
    //     }
    // }
    cout << "The diagonal sum is :" << (sum);
}