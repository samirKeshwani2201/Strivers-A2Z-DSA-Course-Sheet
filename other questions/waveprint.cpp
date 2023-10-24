
#include <bits/stdc++.h>

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> v;
    for (int i = 0; i < mCols; i++)
    {
        if (i % 2 == 0)
        {
            // top to bottom
            for (int j = 0; j < nRows; j++)
            {
                // cout << arr[j][i] << " ";
                v.push_back(arr[j][i]);
            }
        }
        else
        {
            // bottom to top
            for (int j = nRows - 1; j >= 0; j--)
            {
                // cout << arr[j][i] << " ";
                v.push_back(arr[j][i]);
            }
        }
    }
    return v;
}