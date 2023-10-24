// Given a non-empty array of integers, find the top k elements which have the highest frequency in the array. If two numbers have the same frequency then the larger number should be given preference.

// Note: Print the elements according to the frequency count (from highest to lowest) and if the frequency is equal then larger number will be given preference.
#include <bits/stdc++.h>
using namespace std;

vector<int > topK(vector<int> &nums, int k)
{
    map<int, int> mp;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }
    priority_queue<pair<int, int>> pq;
    for (auto it : mp)
    {
        pq.push({it.second, it.first});
    } 
    for (int i = 0; i < k; i++)
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
}

int main()
{

    return 0;
}
