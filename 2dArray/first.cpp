#include <iostream>
using namespace std;
int main()
{
    // treating one row as one set of array
    // int matrix[4][3] = {{1, 2, 3},
    //                     {4, 5, 6},
    //                     {7, 8, 9},
    //                     {10, 11, 12}};
    int matrix[4][3];
    int rows = 4, column = 3;
    // for INput
    cout << "Enter the element of the 2-D array\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> matrix[i][j];
        }
    }
    // for Output
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}