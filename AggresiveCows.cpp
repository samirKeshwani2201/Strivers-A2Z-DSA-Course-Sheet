// There is a new barn with N stalls and C cows. The stalls are located on a straight line at positions x1,….,xN (0 <= xi <= 1,000,000,000). We want to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?
 

#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> stalls, int k, int mid)
{
    int cowCount = 1;
    int lastPosition = stalls[0];
    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - lastPosition >= mid)
        {
            cowCount++;
            if (cowCount == k)
            {
                return true;
            }
            lastPosition = stalls[i];
        }
    }
    return false;
    
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());

    int s = 0;
    // int maxi = -1;
    // for (int i = 0; i < stalls.size(); i++)
    // {
    //     maxi = max(maxi, stalls[i]);
    // }
    int e = stalls[stalls.size() - 1] - stalls[0];
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (isPossible(stalls, k, mid))
        {

            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{

    return 0;
}