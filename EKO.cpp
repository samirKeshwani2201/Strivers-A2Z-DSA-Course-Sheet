#include <bits/stdc++.h>
using namespace std;

long long int n, m;

bool isPoss(int mid, vector<int> v)
{
    int wood = 0;
    int val = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < mid)
        {
            continue;
        }
        val = v[i] - mid;
        wood += val;
    }

    if (wood < m)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int bS(vector<int> v)
{
    int s = 0;
    int e =  1e9;
    int mid = s + (e - s) / 2;
    int ans = 0;
    while (s < e)
    {
        if (isPoss(mid, v))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        s + (e - s) / 2;
    }
    return ans;
}


int main()
{
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << bS(v)<<endl;
    return 0;
}

// vector<int> v;
// long long int n, m;
// bool isPossible(int mid)
// {
//     long long int s = 0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         if (v[i] - mid >= 0)
//         {
//             s += (v[i] - mid);
//         }
//     }
//     if (s >= m)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// int main()
// {
//     cin >> n >> m;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     long long int s = 0;

//     long long int e = *max_element(v.begin(), v.end());
//     long long int ans = -1;
//     long long int mid = (s + e) / 2;
//     while (s <= e)
//     {
//         // mid = s + (e - s) / 2;

//         if (isPossible(mid))
//         {
//             ans = mid;
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//         mid = (s + e) / 2;

//     }

//     cout << ans << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int a[1000005];
// int bsearch(int a[],int n,int k)
// {
//     int lo;
//     int hi;
//     int mid;
//     int i;
//     long long int count;
//     lo = 1;
//     hi = a[n-1];

//     while(lo < hi) {
//         mid = lo + (hi-lo+1)/2;
//         count = 0;
//         for(i = 0; i < n; i++) {
//             if(a[i] > mid) {
//                 count = count + (a[i]-mid);
//             }
//         }

//         if(count >= k) {
//             lo = mid;
//         }
//         else {
//             hi = mid-1;
//         }
//     }

//     return lo;

// }
// int main()
// {
//     long long int k;
//     int n;
//     int t;

//     int i;
//     int ans;

//         scanf("%d%lld",&n,&k);

//         for(i = 0; i < n; i++) {
//             scanf("%d",&a[i]);
//         }

//         sort(a,a+n);

//         ans = bsearch(a,n,k);

//         printf("%d\n",ans);

// }
