#include <iostream>
#include <vector>
using namespace std;
// when passing the 2-D matrix in function we have to pass the the column in second square braket it is compulsary;
pair<int, int> linearSearch(int matrix[][3], int rows, int target)
{
    pair<int, int> ans;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == target)
            {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}
int main()
{
    int matrix[4][3];
    int rows = 4, column = 3;
    int target = 54;
    // for INput
    cout << "Enter the element of the 2-D array\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> matrix[i][j];
        }
    }
    pair<int, int> ans = linearSearch(matrix, rows, target);
    cout << ans.first << " " << ans.second;
}