#include <bits/stdc++.h>
using namespace std;
// TC is (2^n )*n as for every index we have 2 options either pick or not pick and n for printing every subsequence 

//And SC is o(n) as the depth of the recursion tree is n 

void printF(int ind, vector<int> &ds, int arr[], int n)
{
    if (ind == n)
    {
        for (auto it : ds)
        {

            cout << it << " ";
        }
        if (ds.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }

    // take or pick the particular index into the subsequence
    ds.push_back(arr[ind]);
    printF(ind + 1, ds, arr, n);
    ds.pop_back();
    // Not pick or not take condition,this element is not added to your subsequence
    printF(ind + 1, ds, arr, n);
}
int main()
{
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;

    printF(0, ds, arr, n);

    return 0;
}