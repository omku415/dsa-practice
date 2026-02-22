#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // it can change its size during the run time ..
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8, 9, 10}, {9, 10, 11}};
    // Row size=matrix.size()
    // column size=matrix[i].size();
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}