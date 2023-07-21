
#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPossible(vector<int> v, int p, int mid)
{
    int nPar = 0;
    int time = 0;

    for (int i = 0; i < v.size(); i++)
    {
        time = v[i];
        int j = 2;

        while (time <= mid)
        {
            nPar++;
            time = time + (v[i] * (j));
            j++;
        }

        if (nPar >= p)
            return true;
    }
    return false;
}
int bS(vector<int> v, int p)
{
    int s = 0;
    // int e = (v[v.size() - 1]) * (p * (p + 1)) / 2;
    int e = 1e8;

    int ans = 0;

    while (s <= e)
    {
        long long int mid = (s + e) / 2;
        if (isPossible(v, p, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll p;

        cin >> p;
        ll l;
        cin >> l;
        vector<int> v(l);
        for (int i = 0; i < l; i++)
        {
            cin >> v[i];
        }

        bS(v, p);
    }

    return 0;
}