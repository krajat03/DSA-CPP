#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> map;

    for (int i = 0; i < nums.size(); i++)
    {
        int comp = target - nums[i];
        if (map.find(comp) != map.end())
        {
            return {map[comp], i};
        }
        map[nums[i]] = i;
    }
    return {};
}
int main()
{
    int size;
    int target;
    vector<int> nums;
    cout << "Enter size: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        int val;
        cout << "-> Enter value: ";
        cin >> val;
        nums.push_back(val);
    }

    cout << "\n->Enter target value: ";
    cin >> target;

    vector<int> ans = twoSum(nums, target);

    if (!ans.empty())
    {
        cout << "Indices: " << ans[0] << ", " << ans[1] << endl;
    }
    else
    {
        cout << "No solution found!" << endl;
    }
}