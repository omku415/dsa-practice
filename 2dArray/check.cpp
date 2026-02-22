#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 3;
    int start = 0, end = matrix.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target >= matrix[mid][0] &&
            target <= matrix[mid][matrix[mid].size() - 1])
        {
            cout << mid;
            break;
        }
        else if (target > matrix[mid][matrix[mid].size() - 1])
        {
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    return -1;
}