#include <bits/stdc++.h>
using namespace std;

int printS(int ind, int s, int sum, int arr[], int n)
{
    //Condition not satisfied ,strictly done only if array contains positives only 
    if(s>sum)
    {
        return 0;

    }
    if (ind == n)
    {
        // condition satisfied
        if (s == sum)
        {
            return 1;
        }
        // condition not satisfied
        else
            return 0;
    }

    s += arr[ind];
    int l = printS(ind + 1, s, sum, arr, n);

    s -= arr[ind];

    // not pick
    int r = printS(ind + 1, s, sum, arr, n);
    return l + r;
}

int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;

    cout << printS(0, 0, sum, arr, n);

    return 0;
}