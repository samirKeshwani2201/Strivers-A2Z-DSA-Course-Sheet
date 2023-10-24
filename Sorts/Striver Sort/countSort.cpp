#include <bits/stdc++.h>
using namespace std;

void countSort(vector<int> &arr)
{
    int maxi = *max_element(arr.begin(), arr.end());
    vector<int> temp(maxi + 1, 0);
    for (int i = 0; i < arr.size(); i++)
    {
        temp[arr[i]]++;
    }
    for (int i = 1; i <= maxi; i++)
    {
        temp[i] += temp[i - 1];
    }

    vector<int> ans(arr.size());
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        ans[(temp[arr[i]] - 1)] = arr[i];
        temp[arr[i]]--;
    }
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     ans[(temp[arr[i]] - 1)] = arr[i];
    //     temp[arr[i]]--;
    // }

    arr = ans;
}

int main()
{
    vector<int> a = {7, 5, 7, 14, 14, 0, 14, 1, 1};
    countSort(a);
    for (auto it : a)
    {
        cout << it << " ";
    }
    return 0;
}