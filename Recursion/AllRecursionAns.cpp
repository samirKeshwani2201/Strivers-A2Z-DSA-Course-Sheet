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





int main()
{

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
