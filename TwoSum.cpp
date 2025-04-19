#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int> nums, int target)
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
    vector<int> nums = {2, 3, 2, 4};
    int target = 6;

    vector<int> ans = twoSum(nums, target);
    for (int num : ans)
    {
        cout << num << " ";
    }
    cout << endl;
}