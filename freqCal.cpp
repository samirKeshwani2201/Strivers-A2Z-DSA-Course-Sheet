#include <bits/stdc++.h>
using namespace std;

void frequencyCount(vector<int> &arr, int N, int P)
{
    map<int, int> mp;
    for (int i = 0; i < N; i++)
    {
        mp[arr[i]]++;
    }
    for (int i = 1; i <= P; i++)
    {
        arr[i - 1] = mp[i];
    }
}
int main()
{
    
     return 0;
}