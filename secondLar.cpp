#include <bits/stdc++.h>
using namespace std;

// void moveZeroes(vector<int> &nums)
// {

//     int l = 0;
//     int r = nums.size() - 1;
//     while (l < r)
//     {
//         while (nums[l] != 0)
//         {
//             l++;
//         }
//         while (nums[r] == 0)
//         {
//             r--;
//         }
//         swap(nums[l], nums[r]);
//     }
//     // swap(nums[l], nums[r]);

//     for (auto it : nums)
//     {
//         cout << it << " ";
//     }
// }

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    vector<int> v;
    int i = 0;
    int j = 0;

    while (i < n && j < m)
    {
        while (i + 1 < n && arr1[i] == arr1[i + 1])
        {
            i++;
        }
        while (j + 1 < m && arr2[j] == arr2[j + 1])
        {
            j++;
        }

        if (arr1[i] < arr2[j])
        {
            v.push_back(arr1[i]);
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            v.push_back(arr2[j]);
            j++;
        }
        else
        {
            v.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    while (i < n)
    {
        while (i + 1 < n && arr1[i] == arr1[i + 1])
        {
            i++;
        }
        v.push_back(arr1[i]);
        i++;
    }
    while (j < m)
    {
        while (j + 1 < m && arr2[j] == arr2[j + 1])
        {
            j++;
        }
        v.push_back(arr2[j]);
        j++;
    }

    return v;
}

int main()
{
    // vector<int> nums = {0, 1, 0, 3, 12};
    int ar[] = {1, 4, 18, 19, 19, 28, 29, 32, 35, 35, 39, 39, 44, 49, 49, 50, 50};
    int a[] = {8, 34};
    findUnion(ar, a, 17, 2);
    return 0;
}