#include <bits/stdc++.h>
using namespace std;

vector<int> smallestSubarrayWithKDistinct(vector<int> &arr, int k)
{
    vector<vector<int>> da;
    int cnt = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int start = i;
        cnt = 0;
        for (int j = i; j + 1 < arr.size() && cnt <= k; j++)
        {
            if (arr[j] != arr[j + 1])
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }
            if (cnt == k)
            {
                vector<int> t;
                for (int s = i; s <= i; s++)
                {
                    t.push_back(arr[s]);
                }
                da.push_back(t);
                cnt=0;i--;
            }
        }
    }
    sort(da.begin(), da.end());
    return da[0];
}

int findFac(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    return findFac(n - 1) * n;
}

long findDis(int x1, int x2, int y1, int y2)
{
    long a = pow((x1 - x2), 2);
    long b = pow((y1 - y2), 2);
    return a + b;
}

long closestPair(pair<int, int> *coordinates, int n)
{
    long dis = INT32_MAX;
    sort(coordinates, coordinates + n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            long d = findDis(coordinates[i].first, coordinates[j].first, coordinates[i].second, coordinates[j].second);
            if (d < dis)
            {
                dis = d;
            }
        }
    }

    return dis;
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            cout << i << " " << j << " " << endl;
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long ans = 1;
        for (int k = 2; k <= n; k++)
        {
            ans *= ((n + k) / k);
        }
        cout << ans << endl;
    }

    return 0;
}