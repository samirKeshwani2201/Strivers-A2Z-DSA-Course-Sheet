
// You are given a 0-indexed integer array nums, and an integer k.
// The K-or of nums is a non-negative integer that satisfies the following:
// The ith bit is set in the K-or if and only if there are at least k elements of nums in which bit i is set.
// Return the K-or of nums.
// Note that a bit i is set in x if (2i AND x) == 2i, where AND is the bitwise AND operator.

// int findKOr(vector<int> &nums, int k)
// {
//     int ans = 0;
//     int maxi = INT_MIN;
//     for (auto it : nums)
//     {
//         maxi = max(maxi, it);
//     }
//     int bitSz = 0;
//     for (int bits = 0; maxi != 0; bits++)
//     {
//         maxi >>= 1;
//         bitSz++;
//     }
//     for (int bit = 0; bit < bitSz; bit++)
//     {
//         int cnn = 0;
//         for (auto it : nums)
//         {
//             int se = pow(2, bit);
//             if (it & se)
//                 cnn++;
//         }
//         if (cnn >= k)
//         {
//             ans += pow(2, bit);
//         }
//     }
//     return ans;
// }

// You are given two arrays nums1 and nums2 consisting of positive integers.
// You have to replace all the 0's in both arrays with strictly positive integers such that the sum of elements of both arrays becomes equal.
// Return the minimum equal sum you can obtain, or -1 if it is impossible.

// long long minSum(vector<int> &nums1, vector<int> &nums2)
// {
//     int c1 = 0, c2 = 0;
//     long long s1 = 0, s2 = 0;
//     for (auto it : nums1)
//     {
//         if (it == 0)
//         {
//             c1++;
//         }
//         else
//         {
//             s1 += it;
//         }
//     }
//     for (auto it : nums2)
//     {
//         if (it == 0)
//         {
//             c2++;
//         }
//         else
//         {
//             s2 += it;
//         }
//     }
//     // -1 case:
//     if (c1 == 0)
//     {
//         if (s2 + c2 > s1)
//             return -1;
//     }
//     if (c2 == 0)
//     {
//         if (s1 + c1 > s2)
//             return -1;
//     }
//     long long ans = 0;
//     if (s1 < s2)
//     {
//         ans = s2 + c2;
//         if (c1 + s1 > ans)
//         {
//             ans = c1 + s1;
//         }
//     }
//     else if (s1 > s2)
//     {
//         ans = s1 + c1;
//         if (c2 + s2 > ans)
//         {
//             ans = c2 + s2;
//         }
//     }
//     else
//     {
//         if (c1 > c2)
//         {
//             ans = s1 + c1;
//         }
//         else if (c2 > c1)
//         {
//             ans = s1 + c2;
//         }
//         else
//         {
//             ans = s1 + c1;
//         }
//     }
//     return ans;
// }

//  Minimum Increment Operations to Make Array Beautiful
// You are given a 0-indexed integer array nums having length n, and an integer k.
// You can perform the following increment operation any number of times (including zero):
// Choose an index i in the range [0, n - 1], and increase nums[i] by 1.
// An array is considered beautiful if, for any subarray with a size of 3 or more, its maximum element is greater than or equal to k.
// Return an integer denoting the minimum number of increment operations needed to make nums beautiful.
// A subarray is a contiguous non-empty sequence of elements within an array.

// long long minIncrementOperations(vector<int> &nums, int k)
// {
// }
