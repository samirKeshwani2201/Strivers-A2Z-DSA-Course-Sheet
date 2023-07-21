// class Solution
// {
// private:
//     void solve(vector<int> nums, vector<vector<int>> &ans, int index)
//     {
//         // base case
//         if (index >= nums.size())
//         {
//             ans.push_back(nums);
//             return;
//         }
//         for (int j = index; j < nums.size(); j++)
//         {
//             swap(nums[index], nums[j]);
//             solve(nums, ans, index + 1);

//             // Backtrack toneutralise the effect of the swap
//             swap(nums[index], nums[j]);
//         }
//     }

// public:
//     vector<vector<int>> permute(vector<int> &nums)
//     {
//         vector<vector<int>> ans;
//         int index = 0;
//         solve(nums, ans, index);
//         return ans;
//     }
// };

#include <bits/stdc++.h>
using namespace std;

void solve(string str, vector<string> &ans, int index)
{
    if (index >= str.size())
    {
        ans.push_back(str);

        return;
    }
    for (int i = index; i < str.size(); i++)
    {
        swap(str[index], str[i]);
        solve(str, ans, index);
        swap(str[index], str[i]);
    }
}

vector<string> generatePermutations(string &str)
{
    int index = 0;
    vector<string> ans;
    solve(str, ans, index);
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{

    return 0;
}