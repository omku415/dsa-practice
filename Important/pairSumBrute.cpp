#include <iostream>
#include <vector>
using namespace std;
vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main()
{
    int target;
    int n;
    cout << "enter the size of vector\n";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elemnt of the vector in sorted array\n";
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }
    cout << "Enter the target\n";
    cin >> target;
    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << ans[1];
    return 0;
}