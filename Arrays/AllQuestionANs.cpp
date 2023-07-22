#include <bits/stdc++.h>
using namespace std;

// int findMaxConsecutiveOnes(vector<int> &nums)
// {
//     int ans = 0;
//     int cnt = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] == 1)
//         {
//             cnt++;
//         }
//         else
//         {
//             cnt = 0;
//         }
//         ans = max(cnt, ans);
//     }
//     return ans;
// }

// int singleNumber(vector<int> &nums)
// {
//     int ans = nums[0];
//     for (int i = 1; i < nums.size(); i++)
//     {
//         ans = ans ^ nums[i];
//     }
//     return ans;
// }

// int lenOfLongSubarr(int A[], int N, int K)
// {
//     int left = 0;
//     int right = 0;
//     int sum = A[0];
//     int ans = 0;
//     while (right < N)
//     {
//         while (left <= right && sum > K)
//         {
//             sum -= A[left];
//             left++;
//         }
//         if (sum == K)
//         {
//             ans = max(ans, right - left + 1);
//         }
//         right++;
//         if (right < N)
//         {
//             sum += A[right];
//         }
//     }
//     return ans;
// }

// int lenOfLongSubarr(int A[], int N, int K)
// {
//     map<int, int> mp;
//     int ans = 0;
//     int sum = 0;
//     for (int i = 0; i < N; i++)
//     {
//         sum += A[i];
//         if (sum == K)
//         {
//             ans = max(ans, i + 1);
//         }
//         if (mp.find(sum - K) != mp.end())
//         {
//             ans = max(ans, i - mp[sum - K]);
//         }
//         if (mp.find(sum) == mp.end())
//         {
//             mp[sum] = i;
//         }
//     }
//     return ans;
// }
// int getLongestSubarray(int A[], int N, int K)
// {
//     int n = N; // size of the array.
//     map<int, int> preSumMap;
//     int sum = 0;
//     int maxLen = 0;
//     for (int i = 0; i < n; i++)
//     {
//         // calculate the prefix sum till index i:
//         sum += A[i];
//         // if the sum = k, update the maxLen:
//         if (sum == K)
//         {
//             maxLen = max(maxLen, i + 1);
//         }
//         // calculate the sum of remaining part i.e. x-k:
//         int rem = sum - K;
//         // Calculate the length and update maxLen:
//         if (preSumMap.find(rem) != preSumMap.end())
//         {
//             int len = i - preSumMap[rem];
//             maxLen = max(maxLen, len);
//         }
//         // Finally, update the map checking the conditions:
//         if (preSumMap.find(sum) == preSumMap.end())
//         {
//             preSumMap[sum] = i;
//         }
//     }
//     return maxLen;
// }

// vector<int> twoSum(vector<int> &nums, int target)
// {
//     map<int, int> mp;
//       for (int i = 0; i < nums.size(); i++)
//     {
//         if (mp.find(target - nums[i]) != mp.end())
//         {
//             return {i, mp[target - nums[i]]};
//         }
//         mp[nums[i]] = i;
//     }
//     return {};
// }

// void sortColors(vector<int> &nums)
// {
//     map<int, int> mp;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         mp[nums[i]]++;
//     }
//     nums.clear();
//     for (auto it : mp)
//     {
//         nums.insert(nums.end(), it.second, it.first);
//     }
// }

// void sortColors(vector<int> &nums)
// {
//     int l = 0, m = 0, h = nums.size() - 1;
//     while (m <= h)
//     {
//         if (nums[m] == 0)
//         {
//             swap(nums[l], nums[m]);
//             l++;
//             m++;
//         }
//         else if (nums[m] == 1)
//         {
//             m++;
//         }
//         else if (nums[m] == 2)
//         {
//             swap(nums[m], nums[h]);
//             h--;
//         }
//     }
// }

// void sortColors(vector<int> &nums)
// {
//     int j = 0;
//     int k = nums.size() - 1;
//     for (int i = 0; i <=k; i++)
//     {
//         if (nums[i] == 0)
//         {
//             swap(nums[i], nums[j++]);
//         }
//         else if (nums[i] == 2)
//         {
//             swap(nums[i--], nums[--k]);
//         }
//     }
// }

// int majorityElement(vector<int> &nums)
// {
//     sort(nums.begin(), nums.end());
//     return nums[nums.size() / 2];
// }

// int majorityElement(vector<int> &nums)
// {
//     int vote = 0;
//     int ele;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (vote)
//         {
//             vote += ((nums[i] == ele) ? 1 : -1);
//         }
//         else
//         {
//             vote = 1;
//             ele = nums[i];
//         }
//     }
//     return ele;
// }

// int maxSubArray(vector<int> &nums)
// {
//     int lmax = nums[0];
//     int gmax = nums[0];
//     int gsind = 0, geind = 0;
//     int csind = 0;
//     for (int i = 1; i < nums.size(); i++)
//     {
//         // lmax = max(lmax + nums[i], nums[i]);
//         // gmax = max(lmax, gmax);
//         if (nums[i] > nums[i] + lmax)
//         {
//             csind = i;
//             lmax = nums[i];
//         }
//         else
//         {
//             lmax += nums[i];
//         }
//         if (gmax < lmax)
//         {
//             geind = i;
//             gsind = csind;
//             gmax = lmax;
//         }
//         else if (gmax == lmax && geind - gsind < i - csind)
//         {
//             geind = i;
//             gsind = csind;
//         }
//     }
//     for (int i = gsind; i <= geind; i++)
//     {
//         cout << nums[i] << " ";
//     }
//     return gmax;
// }

// int maxProfit(vector<int> &prices)
// {
//     int lmin = INT_MAX;
//     int profit = 0;
//     for (int i = 0; i < prices.size(); i++)
//     {
//         lmin = min(lmin, prices[i]);
//         profit = max(prices[i] - lmin, profit);
//     }
//     return profit;
// }

// vector<int> rearrangeArray(vector<int> &nums)
// {
//     vector<int> po;
//     vector<int> ne;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] > 0)
//         {
//             po.push_back(nums[i]);
//         }
//         else
//         {
//             ne.push_back(nums[i]);
//         }
//     }
//     int j = 0;
//     int k = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (i % 2 == 0)
//         {
//             nums[i] = *(po.begin() + j);
//             j++;
//         }
//         else
//         {
//             nums[i] = *(ne.begin() + k);
//             k++;
//         }
//     }
// }

// vector<int> rearrangeArray(vector<int> &nums)
// {
//  int pos = 0;
//     int neg = 1;
//     vector<int> ans(nums.size());
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] > 0)
//         {
//             ans[pos] = nums[i];
//             pos += 2;
//         }
//         else
//         {
//             ans[neg] = nums[i];
//             neg += 2;
//         }
//     }
//     return ans;
// }

// void nextPermutation(vector<int> &nums)
// {
//     int k, l;
//     for (k = nums.size() - 2; k >= 0; k--)
//     {
//         if (nums[k] < nums[k + 1])
//         {
//             break;
//         }
//     }
//     if (k < 0)
//     {
//         reverse(nums.begin(), nums.end());
//     }
//     else
//     {
//         for (l = nums.size() - 1; l > k; l--)
//         {
//             if (nums[l] > nums[k])
//             {
//                 swap(nums[l], nums[k]);
//                 break;
//             }
//         }
//         reverse(nums.begin() + k + 1, nums.end());
//     }
// }

// i is 0 j is 0 k is 0 k is 1 j is 1 k is 1 k is 2 i is 1 j is 1 k is
// 1 k is 2 j is 2 k is 2 k is 3 i is 2 j is 2 k is 2 k is 3 j is 3 k is 3 k is 4 k is 5 k is 6
// void nextPermutationn(vector<int> &nums)
// {
//     vector<int> org(nums);
//     sort(nums.begin(), nums.end());
//     vector<vector<int>> store;
//     int sz = nums.size();
//     for (int i = 0; i < sz; i++)
//     {
//         for (int j = i; (j + 1) % sz != i; ++j)
//         {
//             vector<int> per;
//             for (int k = j; ((k + 1) % sz) != j; ++k)
//             {
//                 cout << i << " " << j << " " << k << " ";
//                 cout << endl;
//                 per.push_back(nums[(k % sz)]);
//             }
//             store.push_back(per);
//         }
//     }
//     for (int i = 0; i < store.size(); i++)
//     {
//         for (int j = 0; j < nums.size(); j++)
//         {
//             cout << store[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// void nextPermutation(vector<int> &nums)
// {
//     int n = nums.size();
//     int breakpt = -1;
//     for (int i = n - 2; i >= 0; i--)
//     {
//         if (nums[i] < nums[i + 1])
//         {
//             breakpt = i;
//             break;
//         }
//     }
//     if (breakpt == -1)
//     {
//         reverse(nums.begin(), nums.end());
//     }
//     for (int i = n - 1; i > breakpt; i--)
//     {
//         if (nums[i] > nums[breakpt])
//         {
//             swap(nums[breakpt], nums[i]);
//         }
//     }
//     reverse(nums.begin() + breakpt + 1, nums.end());
// }

// vector<int> superiorElements(vector<int> &a)
// {
//     int mini;
//     mini = a[a.size() - 1];
//     vector<int> ans;
//     ans.push_back(mini);
//     for (int i = a.size() - 2; i >= 0; i--)
//     {
//         if (a[i] > mini)
//         {
//             ans.push_back(a[i]);
//             mini = a[i];
//         }
//     }
//     return ans;
// }

// int longestConsecutive(vector<int> &nums)
// {
//     if (nums.size() == 0)
//     {
//         return 0;
//     }
//     sort(nums.begin(), nums.end());
//     int ans = 1;
//     int tans = 1;
//     for (int i = 0; i < nums.size() - 1; i++)
//     {
//         if ((i + 1 < nums.size()) && (nums[i] + 1 == nums[i + 1]))
//         {
//             tans += 1;
//         }
//         else if (nums[i] != nums[i + 1])
//         {
//             tans = 1;
//         }
//         ans = max(tans, ans);
//     }
//     return ans;
// }

// class Solution
// {
// public:
//     int longestConsecutive(vector<int> &nums)
//     {
//         map<int, int> mp;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             mp[nums[i]] = 1;
//         }
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (mp.find(nums[i] - 1) != mp.end())
//             {
//                 mp[nums[i]] = 0;
//             }
//         }
//         int ans = 0;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (mp[nums[i]] == 1)
//             {
//                 int len = 1;
//                 while (mp.find(nums[i] + len) != mp.end())
//                 {
//                     len++;
//                 }
//                 ans = max(ans, len);
//             }
//         }
//         return ans;
//     }
// };

// int longestConsecutive(vector<int> &nums)
// {
//     unordered_set<int> st;
//     for (auto it : nums)
//     {
//         st.insert(it);
//     }
//     int ans = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {  int count = 0;
//         if (st.find(nums[i] - 1) == st.end())
//         {
//             int currNum = nums[i];
//             count = 1;
//             while (st.find(currNum + count) != st.end())
//             {
//                 count++;
//             }
//             ans = max(ans, count);
//         }
//     }
//     return ans;
// }
// void setZeroes(vector<vector<int>> &matrix)
// {
//     vector<int> row;
//     vector<int> col;
//     for (int i = 0; i < matrix.size(); i++)
//     {
//         for (int j = 0; j < matrix[i].size(); j++)
//         {
//             if (matrix[i][j] == 0)
//             {
//                 row.push_back(i);
//                 col.push_back(j);
//             }
//         }
//     }
//     // row 0
//     for (auto it : row)
//     {
//         int r = it;
//         for (int i = 0; i < matrix[r].size(); i++)
//         {
//             matrix[r][i] = 0;
//         }
//     }
//     // col
//     for (auto it : col)
//     {
//         int c = it;
//         for (int i = 0; i < matrix.size(); i++)
//         {
//             matrix[i][c] = 0;
//         }
//     }
// }
// void setZeroes(vector<vector<int>> &matrix)
// {
//     bool rowf = false;
//     bool colf = false;
//     int row = matrix.size();
//     int col = matrix[0].size();
//     for (int i = 0; i < col; i++)
//     {
//         if (matrix[0][i] == 0)
//         {
//             rowf = true;
//         }
//     }
//     for (int i = 0; i < row; i++)
//     {
//         if (matrix[i][0] == 0)
//         {
//             colf = true;
//         }
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (matrix[i][j] == 0)
//             {
//                 matrix[i][0] = 0;
//                 matrix[0][j] = 0;
//             }
//         }
//     }
//     for (int i = 1; i < row; i++)
//     {
//         for (int j = 1; j < col; j++)
//         {
//             if (matrix[i][0] == 0 || matrix[0][j] == 0)
//             {
//                 matrix[i][j] = 0;
//             }
//         }
//     }
//     if (rowf)
//     {
//         for (int i = 0; i < col; i++)
//         {
//             matrix[0][i] = 0;
//         }
//     }
//     if (colf)
//     {
//         for (int i = 0; i < row; i++)
//         {
//             matrix[i][0] = 0;
//         }
//     }
//     return;
// }

// void rotate(vector<vector<int>> &matrix)
// {
//     vector<vector<int>> t = matrix;
//     for (int i = 0; i < matrix.size(); i++)
//     {
//         for (int j = 0; j < matrix[i].size(); j++)
//         {
//             t[i][j] = matrix[j][i];
//         }
//     }
//     for (int i = 0; i < t.size(); i++)
//     {
//         reverse(t[i].begin(), t[i].end());
//     }
//     matrix=t;
// }

// void rotate(vector<vector<int>> &matrix)
// {
//     for (int i = 0; i < matrix.size(); i++)
//     {
//         for (int j = 0; j < matrix[i].size(); j++)
//         {
//             if (i > j)
//             {
//                 swap(matrix[i][j], matrix[j][i]);
//             }
//         }
//     }
//     for (int i = 0; i < matrix.size(); i++)
//     {
//         reverse(matrix[i].begin(), matrix[i].end());
//     }
// }

// void rotate(vector<vector<int>> &matrix)
// {
//     for (int i = 0; i < matrix.size(); i++)
//     {
//         reverse(matrix[i].begin(), matrix[i].end());
//     }
//     for (int i = 0; i < matrix.size(); i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             swap(matrix[i][j], matrix[j][i]);
//         }
//     }
// }

// vector<int> spiralOrder(vector<vector<int>> &matrix)
// {
//     int len = matrix.size();
//     vector<int> v;
//     int frow = 0;
//     int lrow = matrix.size() - 1;
//     int fcol = 0;
//     int lcol = matrix[0].size() - 1;
//     int total = (lrow + 1) * (lcol + 1);
//     int count = 0;
//     while (count < total)
//     {
//         // go to first row
//         for (int i = fcol; count<total && i <= lcol; i++)
//         {
//             v.push_back(matrix[frow][i]);
//             count++;
//         }
//         frow++;
//         // go to last col
//         for (int i = frow; count<total && i <= lrow; i++)
//         {
//             v.push_back(matrix[i][lcol]);
//             count++;
//         }
//         lcol--;
//         // go to last row
//         for (int i = lcol; count<total && i >= fcol; i--)
//         {
//             v.push_back(matrix[lrow][i]);
//             count++;
//         }
//         lrow--;
//         // go to first col
//         for (int i = lrow; count<total && i >= frow; i--)
//         {
//             v.push_back(matrix[i][fcol]);
//             count++;
//         }
//         fcol++;
//     }
//     return v;
// }

//  118:

// Given an integer numRows, return the first numRows of Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

// vector<vector<int>> generate(int numRows)
// {
//     vector<int> ppre = {1};
//     vector<int> pre = {1, 1};
//     vector<vector<int>> ans;
//     if (numRows >= 1)
//         ans.push_back(ppre);
//     if (numRows >= 2)
//     {
//         ans.push_back(pre);
//     }
//     for (int i = 0; i < numRows - 2; i++)
//     {
//         ppre = pre;
//         pre.clear();
//         pre.push_back(1);
//         for (int j = 0; j <= i; j++)
//         {
//             pre.push_back((ppre[j] + ppre[j + 1]));
//         }
//         pre.push_back(1);
//         ans.push_back(pre);
//     }
//     // for (auto it : ans)
//     // {
//     //     for (auto jt : it)
//     //     {
//     //         cout << jt << " ";
//     //     }
//     //     cout << endl;
//     // }
//     return ans;
// }

// vector<int> generateRow(int numRows)
// {
//     // asking to give the n th row
//     vector<int> ans;
//     ans.push_back(1);
//     int val = 1;
//     for (int i = 1; i < numRows; i++)
//     {
//         val = val * ((numRows - i));
//         val = val / i;
//         // val = prev * ((numRows - i) / i);
//         ans.push_back(val);
//         // prev = val;
//     }
//     return ans;
// }

// vector<vector<int>> generate(int numRows)
// {
//     vector<vector<int>> ans;
//     for (int i = 1; i <= numRows; i++)
//     {
//         ans.push_back(generateRow(i));
//     }
//     return ans;
// }

// Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

// vector<int> majorityElement(vector<int> &nums)
// {
//     int count = (nums.size()) / 3;
//     map<int, int> freq;
//     for (auto it : nums)
//     {
//         freq[it]++;
//     }
//     nums.clear();
//     for (auto it : freq)
//     {
//         if (it.second > count)
//         {
//             nums.push_back(it.first);
//         }
//     }
//     return nums;
// }

// vector<int> majorityElement(vector<int> &nums)
// {
//     int c1 = 0, c2 = 0, e1 = INT_MIN, e2 = INT_MIN;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (c1 == 0 && nums[i] != e2)
//         {
//             c1 = 1;
//             e1 = nums[i];
//         }
//         else if (c2 == 0 && nums[i] != e1)
//         {
//             c2 = 1;
//             e2 = nums[i];
//         }
//         else if (nums[i] == e1)
//         {
//             c1++;
//         }
//         else if (nums[i] == e2)
//         {
//             c2++;
//         }
//         else
//         {
//             c1--;
//             c2--;
//         }
//     }
//     c1 = 0;
//     c2 = 0;
//     int sz = nums.size() / 3;
//     for (auto it : nums)
//     {
//         if (it == e1)
//         {
//             c1++;
//         }
//         else if (it == e2)
//         {
//             c2++;
//         }
//     }
//     if (c1 > sz && c2 > sz)
//     {
//         return {e1, e2};
//     }
//     else if (c1 > sz)
//     {
//         return {e1};
//     }
//     else if (c2 > sz)
//     {
//         return {e2};
//     }
//     return {};
// }

// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

// vector<vector<int>> threeSum(vector<int> &nums)
// {
//     vector<vector<int>> ans;
//     sort(nums.begin(), nums.end());
//     for (int i = 0; i < nums.size() - 2; i++)
//     {
//         if (i == 0 || (i > 0 && nums[i] != nums[i - 1]))
//         {
//             int lo = i + 1;
//             int hi = nums.size() - 1;
//             while (lo < hi)
//             {
//                 if (nums[i] + nums[lo] + nums[hi] == 0)
//                 {
//                     vector<int> temp;
//                     temp.push_back(nums[i]);
//                     temp.push_back(nums[lo]);
//                     temp.push_back(nums[hi]);
//                     ans.push_back(temp);
//                     while (lo < hi && nums[lo] == nums[lo + 1])
//                         lo++;
//                     while (lo < hi && nums[hi] == nums[hi - 1])
//                         hi--;
//                     lo++;
//                     hi--;
//                 }
//                 else if (nums[i] + nums[lo] + nums[hi] < 0)
//                 {
//                     lo++;
//                 }
//                 else
//                 {
//                     hi--;
//                 }
//             }
//         }
//     }
//     return ans;
// }

// vector<vector<int>> threeSum(vector<int> &nums)
// {
//     set<vector<int>> an;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         set<int> hashset;
//         for (int j = i + 1; j < nums.size(); j++)
//         {
//             int third = -1 * (nums[i] + nums[j]);
//             if (hashset.find(third) != hashset.end())
//             {
//                 vector<int> temp = {nums[i],
//                                     nums[j],
//                                     third};
//                 sort(temp.begin(), temp.end());
//                 an.insert(temp);
//             }
//             hashset.insert(nums[j]);
//         }
//     }
//     vector<vector<int>> ans(an.begin(), an.end());
//     return ans;
// }

// // using hashmap:

// vector<vector<int>> threeSum(vector<int> &nums)
// {
//     vector<vector<int>> ans;
//     sort(nums.begin(), nums.end());
//     if (nums.size() < 3)
//     {
//         return {};
//     }
//     if (nums[0] > 0)
//     {
//         return {};
//     }
//     unordered_map<int, int> mp;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         mp[nums[i]] = i;
//     }
//     for (int i = 0; i < nums.size() - 2; i++)
//     {
//         if (nums[i] > 0)
//             return ans;
//         for (int j = i + 1; j < nums.size() - 1; j++)
//         {
//             int target = -(nums[i] + nums[j]);
//             if (mp.count(target) && mp.find(target)->second > j)
//             {
//                 ans.push_back({nums[i], nums[j], target});
//             }
// j = mp.find(nums[j])->second;
//         }
//         i = mp.find(nums[i])->second;
//     }
//     return ans;
// }

// Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

// 0 <= a, b, c, d < n
// a, b, c, and d are distinct.
// nums[a] + nums[b] + nums[c] + nums[d] == target
// You may return the answer in any order.

// vector<vector<int>> fourSum(vector<int> &nums, int target)
// {
//     sort(nums.begin(), nums.end());
//     vector<vector<int>> ans;
//     if (nums.size() < 4)
//         return {};
//     for (int i = 0; i < nums.size() - 3; i++)
//     {
//         for (int j = i + 1; j < nums.size() - 2; j++)
//         {
//             int lo = j + 1;
//             int hi = nums.size() - 1;
//             while (lo < hi)
//             {
//                 if ((long long)nums[i] + (long long)nums[j] + (long long)nums[lo] + (long long)nums[hi] == target)
//                 {
//                     ans.push_back({nums[i], nums[lo], nums[j], nums[hi]});
//                     while (lo < hi && nums[lo] == nums[lo + 1])
//                         lo++;
//                     while (lo < hi && nums[hi] == nums[hi - 1])
//                         hi--;
//                     lo++;
//                     hi--;
//                 }
//                 else if ((long long)nums[i] + (long long)nums[j] + (long long)nums[lo] + (long long)nums[hi] < target)
//                 {
//                     lo++;
//                 }
//                 else
//                 {
//                     hi--;
//                 }
//             }
//             while (j + 1 < nums.size() && nums[j] == nums[j + 1])
//                 j++;
//         }
//         while (i + 1 < nums.size() && nums[i] == nums[i + 1])
//             i++;
//     }
//     return ans;
// }

// vector<vector<int>> fourSum(vector<int> &nums, int target)
// {
//     vector<vector<int>> ans;
//     sort(nums.begin(), nums.end());
//     if (nums.size() < 4)
//     {
//         return {};
//     }
//     unordered_map<int, int> mp;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         mp[nums[i]] = i;
//     }
//     for (int i = 0; i < nums.size() - 2; i++)
//     {
//         for (int j = i + 1; j < nums.size() - 1; j++)
//         {
//             for (int k = j + 1; k < nums.size(); k++)
//             {
//                 long long tar = nums[i];
//                 tar += nums[j];
//                 tar += nums[k];
//                 if (mp.count(target - tar) && mp.find(target - tar)->second > k)
//                 {
//                     ans.push_back({nums[i], nums[j], nums[k], target - (int)tar});
//                 }
//                 k = mp.find(nums[k])->second;
//             }
//             j = mp.find(nums[j])->second;
//         }
//         i = mp.find(nums[i])->second;
//     }
//     return ans;
// }

// // For k Sum :

// vector<vector<int>> twoSum(vector<int> &nums, int target, int si)
// {
//     int n = nums.size();
//     vector<vector<int>> res;
//     if (n - si < 2)
//     {
//         return res;
//     }
//     int left = si;
//     int right = n - 1;
//     while (left < right)
//     {
//         if (left != si && nums[left] == nums[left - 1])
//         {
//             left++;
//             continue;
//         }
//         int sum = nums[left] + nums[right];
//         if (sum == target)
//         {
//             vector<int> subres = {nums[left], nums[right]};
//             res.push_back(subres);
//             left++;
//             right--;
//         }
//         else if (sum > target)
//         {
//             right--;
//         }
//         else
//         {
//             left++;
//         }
//     }
//     return res;
// }

// vector<vector<int>> kSumHelper(vector<int> &nums, int target, int k, int si)
// {
//     if (k == 2)
//     {
//         return twoSum(nums, target, si);
//     }
//     vector<vector<int>> res;
//     int n = nums.size();
//     if (n - si < k)
//         return res;
//     for (int i = si; i <= n - k; i++)
//     {
//         if (i != si && nums[i] == nums[i - 1])
//         {
//             continue;
//         }
//         vector<vector<int>> subres = kSumHelper(nums, target - nums[i], k - 1, i + 1);
//         for (auto it : subres)
//         {
//             it.push_back(nums[i]);
//             res.push_back(it);
//         }
//     }
//     return res;
// }

// vector<vector<int>> kSum(vector<int> &nums, int target, int k)
// {
//     sort(nums.begin(), nums.end());
//     return kSumHelper(nums,target,k,0);
// }

//  ninja-is-given-an-array-arr-of-size-n-you-have-to-help-him-find-the-longest-subarray-of-arr-whose-sum-is-0-you-must-return-the-length-of-the-longest-subarray-whose-sum-is-0

// int getLongestZeroSumSubarrayLength(vector<int> &arr)
// {
//     int sum = 0;
//     int ans = 0;
//     map<int, int> mp;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         sum += arr[i];
//         mp[i] = sum;
//     }
//     for (int i = 1; i < arr.size(); i++)
//     {
//         if (mp[i - 1] + arr[i] == 0)
//         {
//             ans = max(ans, i + 1);
//         }
//     }
//     return ans;
// }

// int getLongestZeroSumSubarrayLength(vector<int> &arr)
// {
//     map<int, int> mp;
//     int sum = 0;
//     mp[0] = -1;
//     int ans = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         sum += arr[i];
//         if (mp.find(sum) == mp.end())
//         {
//             mp[sum] = i;
//         }
//         else
//         {
//             ans = max(ans, i -mp[sum]);
//         }
//     }
//     return ans;
// }

// int getLongestZeroSumSubarrayLength(vector<int> &arr)
// {
//     map<int, int> mp;
//     int sum = 0;
//     int ans = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         sum += arr[i];
//         if (sum == 0)
//         {
//             ans = i + 1;
//         }
//         if (mp.find(sum) != mp.end())
//         {
//             ans = max(ans, i - mp[sum]);
//         }
//         else
//         {
//             mp[sum] = i;
//         }
//     }return ans;
// }

// given-an-array-a-consisting-of-n-integers-and-an-integer-b-find-the-number-of-subarrays-of-array-a-whose-bitwise-xor-of-all-elements-is-equal-to-b

int subarraysWithSumK(vector<int> a, int b)
{
    
}

int main()
{
    vector<int> v = {0, 0, 1, 2, 3, 4, 5, 6, 7, 8};
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }

    return 0;
}
