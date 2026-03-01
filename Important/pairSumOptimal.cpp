#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target, vector<int> ans)
{
    int srt = 0;
    int end = nums.size() - 1;
    int sum = 0;
    while (srt < end)
    {
        sum = nums[srt] + nums[end];
        if (sum < target)
        {
            srt++;
        }
        else if (sum > target)
        {
            end--;
        }
        else
        {
            ans.push_back(srt);
            ans.push_back(end);
            return ans;
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

    vector<int> ans;
    ans = pairSum(nums, target, ans);
    cout << ans[0] << " " << ans[1];

    return 0;
}