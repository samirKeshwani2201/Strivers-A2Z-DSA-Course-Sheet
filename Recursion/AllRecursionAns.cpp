#include <bits/stdc++.h>
using namespace std;

// Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer (similar to C/C++'s atoi function).

// iterative:
// int myAtoi(string s)
// {
//     int i = 0;
//     while (s[i] == ' ')
//         i++;
//     bool isPos = true;
//     if (s[i] == '-')
//     {
//         isPos = false;
//         i++;
//     }
//     else if (s[i] == '+')
//     {
//         i++;
//     }
//     double ans = 0;
//     while (i < s.size() && s[i] >= '0' && s[i] <= '9')
//     {
//         int digit = s[i] - '0';
//         if (ans > (INT_MAX - digit) / 10)
//         {
//             return !isPos ? INT_MIN : INT_MAX;
//         }
//         ans = ans * 10 + digit;
//         i++;
//     }
//     if (!isPos)
//         ans = ans * -1;
//     return ans;
// }

// Recursion:
// tc: o(n) sc:o(n)
// long helper(string s, int sign, int i, long result)
// {
//     if (sign * result >= INT_MAX)
//         return INT_MAX;
//     else if (sign * result <= INT_MIN)
//     {
//         return INT_MIN;
//     }
//     if (i >= s.size() || s[i] > '9' || s[i] < '0')
//         return sign * result;
//     result = helper(s, sign, i + 1, (result * 10 + (s[i] - '0')));
//     return result;
// }
// int myAtoi(string s)
// {
//     int sign = 1;
//     int i = 0;
//     while (i < s.size() && s[i] == ' ')
//         i++;
//     if (s[i] == '-')
//         sign = -1, i++;
//     else if (s[i] == '+')
//         sign = 1, i++;
//     return helper(s, sign, i, 0);
// }

// double myPow(double x, double n)
// {
//     if (n == 0)
//         return 1;
//     return (n > 0) ? x * myPow(x, n - 1) : (double)(myPow(x, n + 1) / x);
// }

// sc =tc= o(lg(n))

// double myPow(double x, int n)
// {
//     if (n == 0)
//         return 1;
//     if (n < 0)
//     {
//         n = abs(n);
//         x = 1.0 / x;
//     }
//     if (n % 2 == 0)
//     {
//         return myPow(x * x, n / 2);
//     }
//     else
//     {
//         return x * myPow(x, n - 1);
//     }
// }

// tc:lgn sc=1
// double myPow(double x, int n)
// {
//     double ans = 1;
//     long long  nn=abs(n);
//     if(n<0)x=1/x;
//     while (nn>0)
//     {
//         if (nn % 2 == 0)
//         {
//             nn = nn / 2;
//            x= (x * x);
//         }
//         else
//         {
//             ans = ans * x;
//             nn--;
//         }
//     }
//     return ans;
// }

// double myPow(double x, int n)
// {
//     double ans=1;
//     if(n<0)
//     {
//         x=1.0/x;
//     }
//     long num=labs(n);
//      while(num)
//      {
//          if(num & 1)
//          {
//              ans=ans*x;
//          }
//          x=x*x;
//          num>>=1;
//      }
//     return ans;
// }

// A digit string is good if the digits (0-indexed) at even indices are even and the digits at odd indices are prime (2, 3, 5, or 7).

// For example, "2582" is good because the digits (2 and 8) at even positions are even and the digits (5 and 2) at odd positions are prime. However, "3245" is not good because 3 is at an even index but is not even.
// Given an integer n, return the total number of good digit strings of length n. Since the answer may be large, return it modulo 109 + 7.

// A digit string is a string consisting of digits 0 through 9 that may contain leading zeros.

// const int MOD = 1000000007;

// long long int power(long long x, long long n)
// {
//     if (n == 0)
//         return 1;
//     if (n % 2 == 0)
//     {
//         return (power((x * x) % MOD, n / 2)) % MOD;
//     }
//     else
//     {
//         return (x * power(x, n - 1)) % MOD;
//     }
// }

// int countGoodNumbers(long long n)
// {
//     long long e = ceil(n / 2.0);
//     long long o = (n - e);
//     return (power(5, e) * power(4, o))%MOD;
// }

// long long int power(long long x, long long n)
// {
//     if (n == 0)
//         return 1;
//     long long int ans = 1;
//     while (n)
//     {
//         if (n & 1)
//             ans = (ans * x) % MOD;
//         n >>= 1;
//         x = (x * x) % MOD;
//     }
//     return ans;
// }

// long long int power(long long int x, long long int y){
//     if(y==0) return 1;
//     long long int res = power(x, y/2);
//     res = (res * res)%MOD;
//     if(y%2==1) res = (res * x)%MOD;
//     return res;
// }

// int countGoodNumbers(long long n)
// {
//     long long e = ceil(n / 2.0);
//     long long o = (n - e);
//     return (power(5, e) * power(4, o)) % MOD;
// }

// You are given a stock S. Your task is to
// recursively sort the sack.

// void insert(stack<int> &s, int temp)
// {
//     if (s.empty() || s.top() < temp)
//     {
//         s.push(temp);
//         return;
//     }
//     int val = s.top();
//     s.pop();
//     insert(s, temp);
//     s.push(val);
//     return;
// }

// void sortStack(stack<int> &st)
// {
//     if (st.size() == 0 || st.size() == 1)
//         return;
//     int temp = st.top();
//     st.pop();
//     sortStack(st);
//     insert(st, temp);
//     return;
// }

// Reverse a stack:

// tc=sc :o(n)

// void revStack(stack<int> &s)
// {
//     stack<int> demo;
//     while (!s.empty())
//     {
//         int t = s.top();
//         demo.push(t);
//         s.pop();
//     }
//     s = demo;
//     return;
// }

// recursion:

// tc

// void insert(stack<int> &s, int temp)
// {
//     if (s.empty())
//     {
//         s.push(temp);
//         return;
//     }
//     int val = s.top();
//     s.pop();
//     insert(s, temp);
//     s.push(val);
// }

// void revStack(stack<int> &s)
// {
//     if (s.empty())
//         return;
//     int temp = s.top();
//     s.pop();
//     revStack(s);
//     insert(s, temp);
// }

// void print(int n)
// {
//     if (n == 0)
//         return;
//     cout << n << " ";
//     print(n - 1);
// }

// You have been given on integer ’N'. Your task
// is to generate and return all binory strings of
// length 'N' such that there are no consecutive
// 1's in the string.

// void helper(vector<string> &ans, string tm, int N, int prev)
// {
//     if (N == 0)
//         return;
//     if (N == 1)
//     {
//         if (prev == 0)
//         {
//             ans.push_back(tm + "0");
//             ans.push_back(tm + "1");
//         }
//         else
//         {
//             ans.push_back(tm + "0");
//         }
//         N--;
//         return;
//     }
//     if (prev == 1)
//     {
//         helper(ans, tm + "0", N - 1, 0);
//     }
//     if (prev == 0)
//     {
//         // its zero so select 0 or 1
//         helper(ans, tm + "1", N - 1, 1);
//         helper(ans, tm + "0", N - 1, 0);
//     }
// }

// vector<string> generateString(int N)
// {
//     if (N == 1)
//         return {"0", "1"};
//     vector<string> ans;
//     string tm = "";
//     helper(ans, tm + "0", N - 1, 0);
//     helper(ans, tm + "1", N - 1, 1);
//     sort(ans.begin(), ans.end());
//     return ans;
// }

// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

// void helper(string tm, vector<string> &ans, int open, int close)
// {
//     if (open == 0 && close == 0)
//     {
//         ans.push_back(tm);
//         return;
//     }
//     if (open == close)
//     {
//         // we cant use (
//         helper(tm + "(", ans, open - 1, close);
//     }
//     else
//     {
//         // we can use any of them
//         if (open)
//             helper(tm + "(", ans, open - 1, close);
//         helper(tm + ")", ans, open, close - 1);
//     }
// }

// vector<string> generateParenthesis(int n)
// {
//     vector<string> ans;
//     string tm = "";
//     helper(tm, ans, n, n);
//     return ans;
// }

// Given an integer array nums of unique elements, return all possible subsets (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

// void helper(vector<vector<int>> &ans, int ind, vector<int> tm, vector<int> nums)
// {
//     if (ind == nums.size())
//     {
//         ans.push_back(tm);
//         return;
//     }
//     // pick current element
//     tm.push_back(nums[ind]);
//     helper(ans, ind + 1, tm, nums);
//     tm.pop_back();
//     // dont pick current element
//     helper(ans, ind + 1, tm, nums);
// }

// vector<vector<int>> subsets(vector<int> &nums)
// {
//     vector<vector<int>> ans;
//     int ind = 0;
//     vector<int> tm;
//     helper(ans, ind, tm, nums);
//     return ans;
// }

// Using bit manipulation

// vector<vector<int>> subsets(vector<int> &nums)
// {
//     vector<vector<int>> ans;
//     int sz = nums.size();
//     for (int num = 0; num < (1 << sz); num++)
//     {
//         vector<int> temp;
//         for (int i = 0; i < sz; i++)
//         {
//             if (num & (1 << i))
//             {
//                 temp.push_back(nums[i]);
//             }
//         }
//         if (temp.size())
//         {
//             ans.push_back(temp);
//         }
//     }
//     return ans;
// }

// You are given two strings 'A’ and  ’B’ of length
// ’N'and  'M’respectively.
// Return the string that has more distinct
// subsequences, if both strings have the same
// number of distinct subsequences, then return
// 'A'.

// Substring is continous and
// subsequence may or may not be continous

// Recursion tle

// void noSub(string a, int ind, string tm, set<string> &st)
// {
//     if (ind >= a.size())
//     {
//         if (tm.size())
//         {
//             st.insert(tm);
//         }
//         return;
//     }
//     // pick
//     tm.push_back(a[ind]);
//     noSub(a, ind + 1, tm, st);
//     tm.pop_back();
//     noSub(a, ind + 1, tm, st);
// }

// string moreSubsequence(int n, int m, string a, string b)
// {
//     set<string> ans1, ans2;
//     noSub(a, 0, "", ans1);
//     for (auto it = ans1.begin(); it != ans1.end(); ++it)
//         cout << ' ' << *it;
//     noSub(b, 0, "", ans2);
//     return ans1.size() >= ans2.size() ? a : b;
// }

// Using hashmap :

// tc:o(n+m)
// sc:o(n+m)

// int countDistinctSubsequenc(string a)
// {
//     int count = 1;
//     unordered_map<char, int> mp;
//     for (int i = 0; i < a.size(); i++)
//     {
//         if (mp[a[i]] == 0)
//         {
//             // it occured first time
//             mp[a[i]] = count;
//             count *= 2;
//         }
//         else
//         {
//             // its already present so remove the duplicated values:
//             int temp = mp[a[i]];
//             mp[a[i]] = count;
//             count *= 2;
// remove the duplicate entries watch the video or diagram in utube will make sense https://www.youtube.com/watch?v=YrRLpfFkdZA
//             count -= temp;
//         }
//     }
//     return count;
// }

// string moreSubsequence(int n, int m, string a, string b)
// {
//     int x = countDistinctSubsequenc(a);
//     int y = countDistinctSubsequenc(b);
//     return (x >= y) ? a : b;
// }

// You are given an array 'A’of size ’N'ond an
// integer’K". You need to generate and return all
// subarrays of array ‘A' whose sum = ‘K’.

// very bad soln, jugaad type gives tle of course

// void helper(int ind, long long k, long long sum, vector<int> tm, vector<int> a, vector<vector<int>> &ans)
// {
//     if (sum == k)
//     {
//         // achieved the sum :
//                for (auto it : ans)
//         {
//             if (it == tm)
//             {
//                 return;
//             }
//         }
//         ans.push_back(tm);
//         return;
//     }
//     if (ind >= a.size() || sum > k)
//     {
//         return;
//     }
//     // either pick the current element
//     tm.push_back(a[ind]);
//     helper(ind + 1, k, sum + a[ind], tm, a, ans);
//     // tm.pop_back();
//     // dont pick the current element (if dont pick then clean tm also)
//     tm.clear();
//     helper(ind + 1, k, 0, tm, a, ans);
// }

// vector<vector<int>> subarraysWithSumK(vector<int> a, long long k)
// {
//     vector<vector<int>> ans;
//     vector<int> tm;
//     helper(0, k, 0, tm, a, ans);
//     sort(ans.begin(), ans.end());
//     return ans;
// }

// basically it wont be solved by recursion ,so done with two pointers approach

// vector<vector<int>> subarraysWithSumK(vector<int> a, long long k)
// {
//     int n = a.size();
//     vector<vector<int>> ans;
//     int start = 0, end = -1;
//     long long curSum = 0;
//     while (start < n)
//     {
//         while ((end + 1 < n) && curSum + a[end + 1] <= k)
//         {
//             curSum += a[end + 1];
//             ++end;
//         }
//         if (curSum == k)
//         {
//             vector<int> temp;
//             for (int i = start; i <= end; i++)
//             {
//                 temp.push_back(a[i]);
//             }
//             ans.push_back(temp);
//         }
//         curSum -= a[start];
//         start++;
//     }
//     return ans;
// }

// You are given an array 'A' of 'N' integers. You
// have to return true if there exists a subset of
// elements of 'A' that sums up to 'K'. Otherwise,
// return false.

// generate all subsets and filter with sum k this gives tle of course :

// void helper(int ind, int sum, vector<vector<int>> &ans, vector<int> cur, vector<int> &candidates, int target)
// {
//     if (sum == target)
//     {
//         // we got the ans:
//         ans.push_back(cur);
//         return;
//     }
//     if (sum > target || ind >= candidates.size())
//     {
//         // didnt got the target
//         return;
//     }
//     // either pick the same element
//     cur.push_back(candidates[ind]);
//     helper(ind + 1, sum + candidates[ind], ans, cur, candidates, target);
//     cur.pop_back();
//     // jump to next element
//     helper(ind + 1, sum, ans, cur, candidates, target);
// }

// bool isSubsetPresent(int n, int k, vector<int> &a)
// {
//     vector<vector<int>> ans;
//     helper(0, 0, ans, {}, a, k);
//     // for (auto it : ans)
//     // {
//     //     for (auto bt : it)
//     //     {
//     //         cout << bt << " ";
//     //     }cout<<endl;
//     // }
//     if (!ans.empty())
//         return true;
//     return false;
// }

// recursion soln gives tle do later with dp

// bool helper(int ind, int sum, int target, vector<int> a)
// {
//     if (target == sum)
//     {
//         // we found the soln
//         return true;
//     }
//     if (ind >= a.size() || sum > target)
//         return false;
//     // pick the current element
//     bool ans1 = helper(ind + 1, sum + a[ind], target, a);
//     // dont pick it
//     bool ans2 = helper(ind + 1, sum, target, a);
//     return ans1 ? ans1 : ans2;
// }
// bool isSubsetPresent(int n, int k, vector<int> &a)
// {
//     vector<vector<int>> ans;
//     return helper(0, 0, k, a);
// }

// Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.
// The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

// void helper(int ind, int sum, vector<vector<int>> &ans, vector<int> cur, vector<int> &candidates, int target)
// {
//     if (sum == target)
//     {
//         // we got the ans:
//         ans.push_back(cur);
//         return;
//     }
//     if (sum > target || ind >= candidates.size())
//     {
//         // didnt got the target
//         return;
//     }
//     // either pick the same element
//     cur.push_back(candidates[ind]);
//     helper(ind, sum + candidates[ind], ans, cur, candidates, target);
//     cur.pop_back();
//     // jump to next element
//     helper(ind + 1, sum, ans, cur, candidates, target);
// }

// vector<vector<int>> combinationSum(vector<int> &candidates, int target)
// {
//     vector<vector<int>> ans;
//     vector<int> cur = {};
//     helper(0, 0, ans, cur, candidates, target);
//     return ans;
// }

// void helper(int start, int sum, int target, vector<int> temp, vector<int> &candidates, vector<vector<int>> &ans)
// {
//     if (sum == target)
//     {
//         ans.push_back(temp);
//         return;
//     }
//     if (sum > target || start >= candidates.size())
//     {
//         return;
//     }
//     for (int i = start; i < candidates.size(); i++)
//     {
//         temp.push_back(candidates[i]);
//         helper(i, sum + candidates[i], target, temp, candidates, ans);
//         temp.pop_back();
//     }
// }

// vector<vector<int>> combinationSum(vector<int> &candidates, int target)
// {
//     vector<vector<int>> ans;
//     helper(0, 0, target, {}, candidates, ans);return ans;
// }

// Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.
// Each number in candidates may only be used once in the combination.

// void helper(int start, int sum, int target, vector<int> &temp, vector<int> &candidates, vector<vector<int>> &ans)
// {
//     if (sum == target)
//     {
//         ans.push_back(temp);
//         return;
//     }
//     else if (sum > target)
//     {
//         return;
//     }
//     for (int i = start; i < candidates.size(); i++)
//     {
//         if (i != start && candidates[i] == candidates[i - 1])
//             continue;
//         if (candidates[i] > target)
//             continue;
//         temp.push_back(candidates[i]);
//         helper(i + 1, sum + candidates[i], target, temp, candidates, ans);
//         temp.pop_back();
//     }
// }

// vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
// {
//     vector<vector<int>> ans;
//     sort(candidates.begin(), candidates.end());
//     vector<int> temp;
//     helper(0, 0, target, temp, candidates, ans);
//     return ans;
// }

// You are given an array 'nums’of ‘n’integers.
// Return all subset sums of 'nums' in a non-
// decreasing order.

// sc : O(  n)
// tc :  O(  log( n))+o(2^n )
// very bad

// void help(int ind, vector<int> temp, vector<int> &num, vector<int> &ans)
// {
//     if (ind >= num.size())
//     {
//         int sum = 0;
//         for (auto te : temp)
//         {
//             sum += te;
//         }
//         ans.push_back(sum);
//         return;
//     }
//     // pick
//     temp.push_back(num[ind]);
//     help(ind + 1, temp, num, ans);
//     temp.pop_back();
//     // not pick
//     help(ind + 1, temp, num, ans);
// }

// vector<int> subsetSum(vector<int> &num)
// {
//     vector<int> ans;
//     help(0, {}, num, ans);
//     sort(ans.begin(), ans.end());
//     return ans;
// }

// vector<int> subsetSum(vector<int> &nums)
// {
//     vector<int> ans;
//     int sz = nums.size();
//     for (int num = 0; num < (1 << sz); num++)
//     {
//         vector<int> temp;
//         for (int i = 0; i < sz; i++)
//         {
//             if (num & (1 << i))
//             {
//                 temp.push_back(nums[i]);
//             }
//         }
//         int sum = 0;
//         for (auto it : temp)
//         {
//             sum += it;
//         }
//         ans.push_back(sum);
//     }
//     sort(ans.begin(), ans.end());
//     return ans;
// }

// Given an integer array nums that may contain duplicates, return all possible subsets (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.
//  void help(int ind, vector<int> nums, vector<int> temp, vector<vector<int>> &ans)
// {
//     ans.push_back(temp);
//     for (int i = ind; i < nums.size(); i++)
//     {
//         if (i != ind && nums[i] == nums[i - 1])     continue;
//          temp.push_back(nums[i]);
//         help(i  + 1, nums, temp, ans);
//         temp.pop_back();
//     }
// }

// vector<vector<int>> subsetsWithDup(vector<int> &nums)
// {
//     vector<vector<int>> ans;
//     sort(nums.begin(), nums.end());
//         vector<int>ds;
//     help(0, nums, ds, ans);
//     return ans;
// }

// vector<vector<int>> subsetsWithDup(vector<int> &nums)
// {
//     vector<vector<int>> subset_all;
//     set<vector<int>> s;
//     for (int mask = 0; mask < 1 << nums.size(); mask++)
//     {
//         vector<int> subset;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (mask & (1 << i))
//                 subset.push_back(nums[i]);
//         }
//         sort(subset.begin(), subset.end());
//         s.insert(subset);
//         subset.clear();
//     }
//     for (auto it : s)
//     {
//         subset_all.push_back(it);
//     }
//     return subset_all;
// }

// pick not pick way

// void help(int ind, vector<int> &nums, vector<int> temp, vector<vector<int>> &ans)
// {
//     if (ind >= nums.size())
//     {
//         ans.push_back(temp);
//         return;
//     }
//     // pick
//     temp.push_back(nums[ind]);
//     help(ind + 1, nums, temp, ans);
//     temp.pop_back();
//     while (ind + 1 < nums.size() && nums[ind] == nums[ind + 1])
//         ind++;
//     // dont pick
//     help(ind + 1, nums, temp, ans);
// }

// vector<vector<int>> subsetsWithDup(vector<int> &nums)
// {
//     vector<vector<int>> ans;
//     vector<int> temp;
//     sort(nums.begin(), nums.end());
//     help(0, nums, temp, ans);
//     return ans;
// }

// Find all valid combinations of k numbers that sum up to n such that the following conditions are true:
// Only numbers 1 through 9 are used.
// Each number is used at most once.
// Return a list of all possible valid combinations. The list must not contain the same combination twice, and the combinations may be returned in any order.

// void helper(int start, int sum, int target, vector<int> &temp, vector<vector<int>> &ans, int sz)
// {
//     if (sum == target && temp.size() == sz)
//     {
//         ans.push_back(temp);
//         return;
//     }
//     else if (sum > target)
//     {
//         return;
//     }
//     if (temp.size() > sz)
//         return;
//     for (int i = start; i <= 9; i++)
//     {
//         if (i > target)
//             continue;
//         temp.push_back(i);
//         helper(i + 1, sum + i, target, temp, ans, sz);
//         temp.pop_back();
//     }
// }

// vector<vector<int>> combinationSum3(int k, int n)
// {
//     vector<int> temp;
//     vector<vector<int>> ans;
//     helper(1, 0, n, temp, ans, k);
//     return ans;
// }

// Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

// A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

// done in first go yee amazon to paka mile ga

// void helper(vector<string> &ans, int ind, string curr, string digits, map<char, string> mp)
// {
//     if (ind == digits.size())
//     {
//         ans.push_back(curr);
//         return;
//     }
//     for (auto c : mp[digits[ind]])
//     {
//         curr += c;
//         helper(ans, ind + 1, curr, digits, mp);
//         curr.pop_back();
//     }
// }

// vector<string> letterCombinations(string digits)
// {
//     if (digits.size() == 0)
//         return {};
//     map<char, string> mp;
//     mp['2'] = "abc";
//     mp['3'] = "def";
//     mp['4'] = "ghi";
//     mp['5'] = "jkl";
//     mp['6'] = "mno";
//     mp['7'] = "pqrs";
//     mp['8'] = "tuv";
//     mp['9'] = "wxyz";
//     vector<string> ans;
//     helper(ans, 0, "", digits, mp);
//     return ans;
// }

// #include <iostream>
// #include <vector>
// #include <string>
// #include <queue>

//  vector<std::string> letterCombinations(const std::string &digits)
// {
//     if (digits.empty())
//     {
//         return std::vector<std::string>();
//     }
//     const std::vector<std::string> letters = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
//     std::queue<std::string> queue;
//     std::vector<int> digitsArr(digits.size());
//     for (size_t i = 0; i < digits.size(); ++i)
//     {
//         digitsArr[i] = digits[i] - '0';
//     }
//     queue.push("");
//     for (size_t i = 0; i < digits.size(); ++i)
//     {
//         const std::string &letter = letters[digitsArr[i] - 2];
//         size_t size = queue.size();
//         for (size_t j = 0; j < size; ++j)
//         {
//             std::string temp = queue.front();
//             queue.pop();
//             for (char ch : letter)
//             {
//                 queue.push(temp + ch);
//             }
//         }
//     }
//     std::vector<std::string> result(queue.size());
//     int i = 0;
//     while (!queue.empty())
//     {
//         result[i++] = queue.front();
//         queue.pop();
//     }
//     return result;
// }
// int main()
// {
//     std::string digits = "23";
//     std::vector<std::string> combinations = letterCombinations(digits);
//     for (const std::string &combination : combinations)
//     {
//         std::cout << combination << " ";
//     }
//     return 0;
// }

// Given a string s, partition s such that every substring of the partition is a palindrome. Return all possible palindrome partitioning of s.

// bool isPali(string s, int start, int end)
// {
//     while (start < end)
//     {
//         if (s[start++] != s[end--])
//         {
//             return false;
//         }
//     }
//     return true;
// }

// void help(int ind, string s, vector<string> curr, vector<vector<string>> &ans)
// {
//     if (ind == s.size())
//     {
//         ans.push_back(curr);
//         return;
//     }
//     if (ind > s.size())
//     {
//         return;
//     }
//     for (int i = ind; i < s.size(); i++)
//     {
//         if (isPali(s, ind, i))
//         {
//             curr.push_back(s.substr(ind, i - ind + 1));
//             help(i + 1, s, curr, ans);
//             curr.pop_back();
//         }
//     }
// }

// vector<vector<string>> partition(string s)
// {
//     vector<vector<string>> ans;
//     vector<string> temp;
//     help(0, s, temp, ans);
//     return ans;
// }

// Given an m x n grid of characters board and a string word, return true if word exists in the grid.
// The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once.

// sc:o(len(word))
// tc:(n*m* 4^L)

// bool helper(int ind, int x, int y, vector<vector<char>> &board, string word)
// {
//     int xmax = board.size(), xmin = 0, ymax = board[0].size(), ymin = 0;
//     if (ind == word.size())
//     {
//         return true;
//     }
//     if (x >= xmax || x < xmin || y >= ymax || y < ymin)
//     {
//         return false;
//     }
//     if (word[ind] != board[x][y])
//         return false;
//     // either go right
//     bool a, b, c, d;
//     board[x][y] = '*';
//     a = helper(ind + 1, x + 1, y, board, word);
//     // left
//     b = helper(ind + 1, x, y - 1, board, word);
//     // down
//     c = helper(ind + 1, x, y + 1, board, word);
//     // up
//     d = helper(ind + 1, x - 1, y, board, word);
//     board[x][y] = word[ind];
//     return a || b || c || d;
// }
// bool exist(vector<vector<char>> &board, string word)  {
//     for (int i = 0; i < board.size(); i++)
//     {
//         for (int j = 0; j < board[i].size(); j++)
//         {
//             if (helper(0, i, j, board, word))
//                 return true;
//         }
//     }
//     return false;
// }

// Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

// timepass answer:

// void help(vector<int> nums, vector<vector<int>> &ans, vector<int> cur)
// {
//     if (cur.size() == nums.size())
//     {
//         ans.push_back(cur);
//         return;
//     }
//     for (int i = 0; i < nums.size(); i++)
//     {
//         bool f = false;
//         for (auto it : cur)
//         {
//             if (it == nums[i])
//             {
//                 f = true;
//                 break;
//             }
//         }
//         if (!f)
//         {
//             // not discovered so take it
//             cur.push_back(nums[i % nums.size()]);
//             help(nums, ans, cur);
//             cur.pop_back();
//         }
//     }
// }

// vector<vector<int>> permute(vector<int> &nums)
// {
//     vector<vector<int>> ans;
//     int sz = nums.size();
//     vector<int> temp = nums;
//     help(nums, ans, {});
//     return ans;
// }

// sc :n!+n+n
// tc :? n!*n idk

// void help(vector<vector<int>> &ans, vector<int> nums, vector<int> cur, vector<int> visi)
// {
//     if (cur.size() == nums.size())
//     {
//         ans.push_back(cur);
//         return;
//     }
//     else
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (visi[i] == 0)
//             {
//                 visi[i] = 1;
//                 cur.push_back(nums[i]);
//                 help(ans, nums, cur, visi);
//                 cur.pop_back();
//                 visi[i] = 0;
//             }
//         }
// }

// vector<vector<int>> permute(vector<int> &nums)
// {
//     vector<vector<int>> ans;
//     vector<int> visi(nums.size(), 0);
//     help(ans, nums, {}, visi);
//     return ans;
// }

// swap way :

// void help(int ind, vector<vector<int>> &ans, vector<int> &nums)
// {
//     if (ind >= nums.size())
//     {
//         ans.push_back(nums);
//         return;
//     }
//     for (int i = ind; i < nums.size(); i++)
//     {
//         swap(nums[ind], nums[i]);
//         help(ind + 1, ans, nums);
//         swap(nums[ind], nums[i]);
//     }
// }

// one swap:

// void help(int ind, vector<vector<int>> &ans, vector<int> nums)
// {
//     if (ind >= nums.size())
//     {
//         ans.push_back(nums);
//         return;
//     }
//     for (int i = ind; i < nums.size(); i++)
//     {
//         swap(nums[ind], nums[i]);
//         help(ind + 1, ans, nums);
//     }
// }

// vector<vector<int>> permute(vector<int> &nums)
// {
//     vector<vector<int>> ans;
//     help(0, ans, nums);
//     return ans;
// }

// Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.

// tle :

// void help(vector<vector<int>> &ans, vector<int> nums, vector<int> cur, vector<int> visi)
// {
//     if (cur.size() == nums.size())
//     {
//         for (auto it : ans)
//         {
//             if (it == cur)
//                 return;
//         }
//         ans.push_back(cur);
//         return;
//     }
//     else
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (visi[i] == 0)
//             {
//                 visi[i] = 1;
//                 cur.push_back(nums[i]);
//                 help(ans, nums, cur, visi);
//                 cur.pop_back();
//                 visi[i] = 0;
//             }
//         }
// }

// vector<vector<int>> permuteUnique(vector<int> &nums)
// {
//     vector<vector<int>> ans;
//     vector<int> visi(nums.size(), 0);
//     help(ans, nums, {}, visi);
//     return ans;
// }

// void help(int ind, vector<int> nums, vector<vector<int>> &ans)
// {
//     if (ind >= nums.size())
//     {
//         ans.push_back(nums);
//         return;
//     }
//     for (int i = ind; i < nums.size(); i++)
//     {
//         if (i != ind && nums[i] == nums[ind])
//             continue;
//         swap(nums[ind], nums[i]);
//         help(ind + 1, nums, ans);
//     }
// }

// vector<vector<int>> permuteUnique(vector<int> &nums)
// {
//     sort(nums.begin(), nums.end());
//     vector<vector<int>> ans;
//     help(0, nums, ans);
//     return ans;
// }

// extra spcae approach:
// void help(vector<int> &nums, vector<vector<int>> &ans, int ind)
// {
//     if (ind == nums.size())
//     {
//         ans.push_back(nums);
//         return;
//     }
//     unordered_set<int> mp;
//     for (int i = ind; i < nums.size(); i++)
//     {
//         if (mp.count(nums[i]) == 1)
//             continue;
//         mp.insert(nums[i]);
//         swap(nums[i], nums[ind]);
//         help(nums, ans, ind + 1);
//         swap(nums[i], nums[ind]);
//     }
// }

// vector<vector<int>> permuteUnique(vector<int> &nums)
// {
//     vector<vector<int>> ans;
//     help(nums, ans, {});
//     return ans;
// }

// Permutation with the nextPermutation is left do it if required

// The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.

// Given an integer n, return all distinct solutions to the n-queens puzzle. You may return the answer in any order.

// Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space, respectively.

// in isValid check for 45deg,135deg and check in same coloumn if present or not

// bool isValid(int row, int col, int n, vector<string> cur)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (cur[i][col] == 'Q')
//             return false;
//     }
//     // 45 check:i-- j++
//     for (int i = row, j = col; i >= 0 && j < n; i--, j++)
//     {
//         if (cur[i][j] == 'Q')
//             return false;
//     }
//     //    135deg check:
//     for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
//     {
//         if (cur[i][j] == 'Q')
//             return false;
//     }
//     return true;
// }

// void help(int row, int n, vector<vector<string>> &ans, vector<string> cur)
// {
//     if (row == n)
//     {
//         ans.push_back(cur);
//         return;
//     }
//     for (int col = 0; col < n; col++)
//     {
//         if (isValid(row, col, n, cur))
//         {
//             cur[row][col] = 'Q';
//             help(row + 1, n, ans, cur);
//             cur[row][col] = '.';
//         }
//     }
// }

// vector<vector<string>> solveNQueens(int n)
// {
//     vector<vector<string>> ans;
//     vector<string> cur(n, string(n, '.'));
//     help(0, n, ans, cur);
//     return ans;
// }

// https://leetcode.com/problems/n-queens/discuss/19808/Accepted-4ms-c%2B%2B-solution-use-backtracking-and-bitmask-easy-understand.

// some what optimised :

// tc:o(n^n)
// sc: O(n^n * n^2)

// void help(int row, int n, vector<string> &curr, vector<vector<string>> &res, vector<int> flag_col, vector<int> flag_45, vector<int> flag_135)
// {
//     if (row == n)
//     {
//         res.push_back(curr);
//         return;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (flag_col[i] && flag_45[row + i] && flag_135[n - 1 + i - row])
//         {
//             flag_col[i] = 0;
//             flag_45[row + i] = 0;
//             flag_135[n - 1 + i - row] = 0;
//             curr[row][i] = 'Q';
//             help(row + 1, n, curr, res, flag_col, flag_45, flag_135);
//             curr[row][i] = '.';
//             flag_col[i] = 1;
//             flag_45[row + i] = 1;
//             flag_135[n - 1 + i - row] = 1;
//         }
//     }
// }

// vector<vector<string>> solveNQueens(int n)
// {
//     vector<vector<string>> res;
//     vector<int> flag_col(n, 1), flag_45(2 * n - 1, 1), flag_135(2 * n - 1, 1);
//     vector<string> cur(n, string(n, '.'));
//     help(0, n, cur, res, flag_col, flag_45, flag_135);
//     return res;
// }

// this all 3 array can be reduced to one array :first of size n so addn and add content of 2 nd array and so for 3 array:

// void help(int row, int n, vector<string> &curr, vector<vector<string>> &res, vector<int> flag)
// {
//     if (row == n)
//     {
//         res.push_back(curr);
//         return;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (flag[i] && flag[row + i + n] && flag[(n * 4 - 2) + i - row])
//         {
//             flag[i] = 0;
//             flag[row + i + n] = 0;
//             flag[(n * 4 - 2) + i - row] = 0;
//             curr[row][i] = 'Q';
//             help(row + 1, n, curr, res, flag);
//             curr[row][i] = '.';
//             flag[i] = 1;
//             flag[row + i + n] = 1;
//             flag[(n * 4 - 2) + i - row] = 1;
//         }
//     }
// }

// vector<vector<string>> solveNQueens(int n)
// {
//     vector<vector<string>> res;
//     vector<int> flag(5 * n - 2, 1);
//     vector<string> cur(n, string(n, '.'));
//     help(0, n, cur, res, flag);
//     return res;
// }

// Consider a rat placed at (0, 0) in a square matrix of order N * N. It has to reach the destination at (N - 1, N - 1). Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.
// Note: In a path, no cell can be visited more than one time. If the source cell is 0, the rat cannot move to any other cell.
// void helper(int row, int col, string cur, vector<string> &ans, vector<vector<int>> &m, int n, vector<vector<int>> &vis)
// {
//     if (row == n - 1 && col == n - 1)
//     {
//         ans.push_back(cur);
//         return;
//     }
//     // down
//     if (vis[row][col] == 0 && row + 1 < n && m[row + 1][col] == 1)
//     {
//         vis[row][col] = 1;
//         cur.push_back('D');
//         helper(row + 1, col, cur, ans, m, n, vis);
//         cur.pop_back();
//         vis[row][col] = 0;
//     }
//     // left:
//     if (vis[row][col] == 0 && col - 1 >= 0 && m[row][col - 1] == 1)
//     {
//         vis[row][col] = 1;
//         cur.push_back('L');
//         helper(row, col - 1, cur, ans, m, n, vis);
//         cur.pop_back();
//         vis[row][col] = 0;
//     }
//     // right:
//     if (vis[row][col] == 0 && col + 1 < n && m[row][col + 1] == 1)
//     {
//         vis[row][col] = 1;
//         cur.push_back('R');
//         helper(row, col + 1, cur, ans, m, n, vis);
//         cur.pop_back();
//         vis[row][col] = 0;
//     }
//     // up:
//     if (vis[row][col] == 0 && row - 1 >= 0 && m[row - 1][col] == 1)
//     {
//         vis[row][col] = 1;
//         cur.push_back('U');
//         helper(row - 1, col, cur, ans, m, n, vis);
//         cur.pop_back();
//         vis[row][col] = 0;
//     }
// }

// vector<string> findPath(vector<vector<int>> &m, int n)
// {
//     if (m[0][0] == 0)
//         return {};
//     vector<string> ans;
//     vector<vector<int>> vis(n, vector<int>(n, 0));
//     helper(0, 0, "", ans, m, n, vis);
//     return ans;
// }

// Given a string s and a dictionary of strings wordDict, return true if s can be segmented into a space-separated sequence of one or more dictionary words.

// Note that the same word in the dictionary may be reused multiple times in the segmentation.

// bool isPresent(string s, vector<string> &wordDict)
// {
//     for (auto sp : wordDict)
//     {
//         if (s == sp)
//             return true;
//     }
//     return false;
// }

// bool helper(string s, int index, unordered_set<int> &set, vector<string> &dict)
// {
//     if (index == s.length())
//         return true;
//     for (int i = index + 1; i <= s.length(); i++)
//     {
//         if (set.find(i) != set.end())
//             continue;
//         if (isPresent(s.substr(index, i - index), dict))
//         {
//             // be very carefull here it may ruin the soln if change something here
//             if (helper(s, i, set, dict))
//             {
//                 return true;
//             }
//             set.insert(i);
//         }
//     }
//     return false;
// }

// bool wordBreak(string s, vector<string> wordDict)
// {
//     if (s.empty())
//         return false;
//     unordered_set<int> set;
//     return helper(s, 0, set, wordDict);
// }

// here set necessary to pass inorder to solve the case "aaaaaaa" and {aaa,aaaa}

// tc:o(2^n)
// sc:o(n) explore for all possible substrings

// bool helper(string s, int index, unordered_set<int> &set, unordered_set<string> &dict)
// {
//     if (index == s.length())
//         return true;
//     for (int i = index + 1; i <= s.length(); i++)
//     {
//         if (set.find(i) != set.end())
//             continue;
//         if (dict.find(s.substr(index, i - index)) != dict.end())
//         {
//             // be very carefull here it may ruin the soln if change something here
//             if (helper(s, i, set, dict))
//             {
//                 return true;
//             }
//             set.insert(i);
//         }
//     }
//     return false;
// }

// bool wordBreak(string s, vector<string> wordDict)
// {
//     if (s.empty())
//         return false;
//     unordered_set<int> set;
//     unordered_set<string> dict(wordDict.begin(), wordDict.end());
//     return helper(s, 0, set, dict);
// }

// Given an undirected graph and an integer M. The task is to determine if the graph can be colored with at most M colors such that no two adjacent vertices of the graph are colored with the same color. Here coloring of a graph means the assignment of colors to all vertices. Print 1 if it is possible to colour vertices and 0 otherwise.

// do again after learning graph :

// bool isPossible(int node, vector<int> color, int n, int colo, bool graph[101][101])
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (i != node && graph[i][node] == 1 && color[i] == colo)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// bool help(int node, vector<int> color, bool graph[101][101], int m, int n)
// {
//     if (node == n)
//     {
//         return true;
//     }
//     for (int i = 1; i <= m; i++)
//     {
//         if (isPossible(node, color, n, i, graph))
//         {
//             color[node] = i;
//             bool r = help(node + 1, color, graph, m, n);
//             if (r)
//                 return true;
//             color[node] = 0;
//         }
//     }
//     return false;
// }

// bool graphColoring(bool graph[101][101], int m, int n)
// {
//     vector<int> color(n, 0);
//     return help(0, color, graph, m, n);
// }

// Each of the digits 1-9 must occur exactly once in each row.
// Each of the digits 1-9 must occur exactly once in each column.
// Each of the digits 1-9 must occur exactly once in each of the 9 3x3 sub-boxes of the grid.

// bool isSafe(int x, int y, char ch, vector<vector<char>> &board)
// {
//     // check in row coloumn
//     // check in 3 *3 matrix
//     for (int i = 0; i < board[x].size(); i++)
//     {
//         if (board[x][i] == ch)
//         {
//             return false;
//         }
//         if (board[i][y] == ch)
//         {
//             return false;
//         }
//     }
//     for (int row = (x / 3) * 3; row < (x / 3) * 3 + 3; row++)
//     {
//         for (int col = (y / 3) * 3; col < (y / 3) * 3 + 3; col++)
//         {
//             if (board[row][col] == ch)
//             {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// bool help(vector<vector<char>> &board)
// {
//     for (int i = 0; i < board.size(); i++)
//     {
//         for (int j = 0; j < board[0].size(); j++)
//         {
//             if (board[i][j] = '.')
//             {
//                 for (char k = '1'; k <= '9'; k++)
//                 {
//                     if (isSafe(i, j, k, board))
//                     {
//                         board[i][j] = k;
//                         if (help(board))
//                         {
//                             return true;
//                         }
//                         board[i][j] = '.';
//                     }
//                 }
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// void solveSudoku(vector<vector<char>> &board)
// {
//     help(board);
//     return;
// }

// Given a string num that contains only digits and an integer target, return all possibilities to insert the binary operators '+', '-', and/or '*' between the digits of num so that the resultant expression evaluates to the target value.
// Note that operands in the returned expressions should not contain leading zeros.

// tc=o(4^n)
// sc:o(n)

vector<string> ans;
void help(int ind, long long prev, long long sum, int target, string curr, string &num)
{
    if (ind == num.size())
    {
        if (sum == target)
        {
            ans.push_back(curr);
        }
        return;
    }
    for (int i = ind; i < num.size(); i++)
    {
        if (i > ind && num[ind] == '0')
        {
            return;
        }
        long nu = stol(num.substr(ind, i - ind + 1));
        if (ind == 0)
        {
            help(i + 1, nu, nu, target, curr + num.substr(ind, i - ind + 1), num);
        }
        else
        {
            help(i + 1, nu, sum + nu, target, curr + "+" + num.substr(ind, i - ind + 1), num);
            help(i + 1, -nu, sum - nu, target, curr + "-" + num.substr(ind, i - ind + 1), num);
            //    carefull
            // sum - prev bcoz we want to undo the extra we dont and then we swap the order of doing operation for better refer abhinav awasthi example 5+40-2*3
            //                                                      |
            help(i + 1, prev * nu, sum - prev + (prev * nu), target, curr + "*" + num.substr(ind, i - ind + 1), num);
        }
    }
}
vector<string> addOperators(string num, int target)
{
    long long prev = 0;
    long long sum = 0;
    help(0, 0, 0, target, "", num);
    return ans;
}


int main()
{
    // vector<int> nums = {2, 0, 2, 0};
    // vector<int> nums2 = {1, 4, 0};
    // stack<int> s;
    // s.push(10);
    // s.push(1000);
    // s.push(100);
    // print(5);
    // while (!s.empty())
    // {
    //     cout << s.top() << " ";
    //     s.pop();
    // }
    return 0;
}
