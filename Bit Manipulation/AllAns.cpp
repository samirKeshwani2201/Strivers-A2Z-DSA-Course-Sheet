#include <bits/stdc++.h>
using namespace std;

// vector<int> bitManipulation(int num, int i)
// {
//     vector<int> ans;
//     ans.push_back((num >>i-1 ) & 1);
//     ans.push_back(num | 1 << i-1);
//     ans.push_back((num & ~(1 << i-1)));
//     return ans;
// }

// Given an integer n, return true if it is a power of two. Otherwise, return false.
// An integer n is a power of two, if there exists an integer x such that n == 2x

// sc: 1
// tc: bitsize of n

// bool isPowerOfTwo(int n)
// {
//     if (n <= 0)
//         return false;
//     int cnt = 0;
//     while (n)
//     {
//         if (n & 1)
//         {
//             cnt++;
//         }
//         if (cnt > 1)
//         {
//             return false;
//         }
//         n = n >> 1;
//     }
//     return true;
// }

// int cntSet(int n)
// {
//     int cnt = 0;
//     while (n != 0)
//     {
//         cnt += (n & 1);
//         n = n >> 1;
//     }
//     return cnt;
// }

// int countSetBits(int N)
// {
//     int ans = 0;
//     for (int i = 1; i <= N; i++)
//     {
//         ans += cntSet(i);
//     }
//     return ans;
// }

// For 0 given integer ’N’, you have to return the number of set bits in the binary
// representation of the numbers from 1 to 'N'.
// notes in notebook

// int getFirstSetBit(int n)
// {
//     int x=0;
//     while((1<<x)<=n)
//     {
//         x++;
//     }
//     return x-1;
// }
// int countSetBits(int N)
// {
//     if (N == 0 )
//         return 0;
//     int x = getFirstSetBit(N);
//     return ((1<<x-1) * x) + (N - (1<<x) + 1) + countSetBits(N - (1<<x));
// }

// Count total set bits in numbers from 0 to N
// vector<int> getBits(int x)
// {
//     vector<int> ans(x + 1, 0);
//     for (int i = 1; i <= x; i++)
//     {
//         ans[i] = ans[i / 2] + (i % 2);
//     }
//     return ans;
// }
// int countSetBits(int N)
// {
//     vector<int> res;
//     res = getBits(N);
//     int cnt = 0;
//     for (int x = 1; x < res.size(); x++)
//         cnt += res[x];
//         return cnt;
// }

// Given two integers dividend and divisor, divide two integers without using multiplication, division, and mod operator

// recursive this wont work for edge cases :

// int help(int dividend, int divisor)
// {
//     bool isneg=false;
//     if((dividend<0 && divisor>=0) || (dividend>=0 && divisor<0))
//     {
//         isneg=true;
//     }
//     dividend=abs(dividend);
//     divisor=abs(divisor);
//     int q = 0;
//     int tdivisor = divisor;
//     if (dividend < divisor)
//     {
//         return 0;
//     }
//     while (divisor <= dividend && divisor>(divisor <<( q+1)))
//     {
//         q++;
//     }
//     long long t=( 1 << q ) + help(dividend -  (tdivisor<<q), tdivisor);
//     return isneg?-1*t:t;
// }

// int divide(int dividend, int divisor)
// {
//     return help(dividend, divisor);
// }

// accepted:tc : lg(a)*lg(b)
// sc=o(1)

// int divide(int dividend, int divisor)
// {
//       if(dividend == divisor)
//             return 1;
//     bool isneg = false;
//     if ((dividend < 0 && divisor >= 0) || (dividend >= 0 && divisor < 0))
//     {
//         isneg = true;
//     }
//     unsigned int a = abs(dividend);
//     unsigned int b = abs(divisor);
//     unsigned int ans = 0;
//     while (a >= b)
//     {
//         short q = 0;
//         while (a > (b << (q + 1)))
//         {
//             q++;
//         }
//         ans += (1 << q);
//         a -= (b << q);
//     }
//     if (ans == (1 << 31) && !isneg)
//     {
//         return INT_MAX;
//     }
//     return isneg ? -ans : ans;
// }

// The problem is to ?nd the rightmost bit of a non—negotive number ’N’that is
// currently unset (i.e., has 0 value of O) in its binary representation and set it to 1.

// brute force :
// tc:lgn
// sc=constant
// int setBits(int n)
// {
//    int cnt=0;
//    int t=n;
//    while( t  & 1!=0)
//    {
//        cnt++;
//        t=t>>1;
//    }
//    if(t!=0)
//    n=n| (1<<cnt);
//    return n;
// }

// int setBits(int n)
// {
//     if (!(n & n + 1))
//     {
//         return n;
//     }
//     return n | n + 1;
// }

// void swapNumber(int &a, int &b)
// {
//     a = a ^ b;
//     b = a ^ b;
//     a = a ^ b;
//     return;
// }

// A bit flip of a number x is choosing a bit in the binary representation of x and flipping it from either 0 to 1 or 1 to 0.

// For example, for x = 7, the binary representation is 111 and we may choose any bit (including any leading zeros not shown) and flip it. We can flip the first bit from the right to get 110, flip the second bit from the right to get 101, flip the fifth bit from the right (a leading zero) to get 10111, etc.
// Given two integers start and goal, return the minimum number of bit flips to convert start to goal.

// int minBitFlips(int start, int goal)
// {
//     int cnt = 0;
//     while (goal || start)
//     {
//         int t = goal & 1;
//         int p = start & 1;
//         if (p ^ t)
//         {
//             cnt++;
//         }
//         start = start >> 1;
//         goal = goal >> 1;
//     }
//     return cnt;
// }

// or return __builtin_popcount(start^goal);

// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// int singleNumber(vector<int> &nums)
// {
//     int ans=0;
//     for(auto it : nums)
//     {
//         ans^=it;
//     }
//     return ans;
// }

// Subsets:
//   vector<vector<int>> subsets(vector<int>& nums) {
//            vector<vector<int>>ans;
//         for(int i=0;i<(1<<nums.size());i++)
//         {
//             vector<int>temp;
//             for(int j=0;j<nums.size();j++)
//             {
//                 if(i & (1<<j))
//                 {
//                   temp.push_back(nums[j]);
//                 }
//             }
//             ans.push_back(temp);
//         }
//         return ans;
//     }

// You are given two numbers ’L’and ’R’.
// Find the XOR of the elements in the range [L, R].

int xor1N(int n)
{
    if (n % 4 == 0)
    {
        return n;
    }
    if (n % 4 == 1)
    {
        return 1;
    }
    if (n % 4 == 2)
    {
        return n + 1;
    }
    return 0;
}

int findXOR(int L, int R)
{
    return xor1N(L - 1) ^ xor1N(R);
}

// You are given an array ’arr' of size ’n’.
// It contains an even number of occurrences for all numbers except two numbers.
// Find those two numbers which have odd occurrences and return in decreasing
// order.
// vector<int> twoOddNum(vector<int> arr)
// {
//     map<int, int> mp;
//     vector<int> a;
//     for (auto it : arr)
//     {
//         mp[it]++;
//     }
//     for (auto i : mp)
//     {
//         if (i.second %2)
//         {
//             a.push_back(i.first);
//         }
//     }
//     sort(a.rbegin(), a.rend());
//     return a;
// }

// vector<int> twoOddNum(vector<int> arr)
// {
//     int xorr = 0;
//     vector<int> ans;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         xorr = xorr^arr[i];
//     }
//     int k = xorr&(-xorr);
//     int p = 0, q = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] & k)
//         {
//             p ^= arr[i];
//         }
//         else
//         {
//             q ^= arr[i];
//         }
//     }
//     if (p > q)
//     {
//         ans.push_back(p);
//         ans.push_back(q);
//     }
//     else
//     {
//         ans.push_back(q);
//         ans.push_back(p);
//     }
//     return ans;
// }

// unique prime factors of n in increasing order :

// tle

// vector<int> countPrimes(int n)
// {
//     vector<int> ans;
//     for (int i = 2; i < n; i++)
//     {
//         int cnt = 0;
//         for (int j = 2; j < n; j++)
//         {
//             if (i % j == 0 && n%i==0)
//             {
//                 cnt++;
//                 if (cnt >= 2)
//                 {
//                     break;
//                 }
//             }
//         }
//         if (cnt == 1)
//         {
//             ans.push_back(i);
//         }
//     }
//     return ans;
// }

// sieve way:

// vector<int> countPrimes(int n)
// {
//     vector<int> ans;
//     vector<bool> sieve(n + 1, true);
//     sieve[0] = sieve[1] = false;
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (sieve[i] == true)
//         {
//             for (int j = i * i; j <= n; j += i)
//             {
//                 sieve[j] = false;
//             }
//         }
//     }
//     for (int i = 2; i <= n; i++)
//     {
//         if (sieve[i] && n % i == 0)
//         {
//             ans.push_back(i);
//         }
//     }
//     return ans;
// }

// tc:o(n)
 
// vector<int> countPrimes(int n)
// {
//   vector<int>ans;
//     for(int i=2;i<=n;i++)
//     {
//       if(n%i==0)
//       {
//         ans.push_back(i);
//         while(n%i==0)
//         n/=i;
//       }
//     }
//     return ans;
// }


// O(sqrt(n)) 

// vector<int> countPrimes(int n)
// {
//   vector<int>ans; 
//     for(int i=2;i*i<=n;i++)
//     {
//       if(n%i==0)
//       {
//         ans.push_back(i);
//         while(n%i==0)
//         n/=i;
//       }
//     }
//     if(n>1)ans.push_back(n);
//     return ans;
// }

  
// vector<int> countPrimes(int N)
// { 
//     int spf[N+1];
//     for(int i=1;i<=N;i++)
//     {
//         spf[i]=i;
//     }
//     for(int i=2;i*i<=N;i++)
//     {
//         if(spf[i]==i)
//         {
//             for(int j=i*i;j<=N;j+=i)
//             {
//                 if(spf[j]==j)
//                 {

//                     spf[j]=i;
//                 }
//             }
//         }
//     } 
//    vector<int >ans;
   
//    while(N!=1)
//    {
//        ans.push_back(spf[N]);
//        N/=spf[N];
//    }
//    sort(ans.begin(),ans.end());
//    return ans;
// }
 


// Given an integer n, return the number of prime numbers that are strictly less than n.

// Time Complexity : O(n*log(log(n))
// Space Complexity : O(n)

// int countPrimes(int n)
// {
//     vector<bool> sieve(n + 1, true);
//     sieve[0] = sieve[1] = false;
//     int cnt = 0;
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (sieve[i] == true)
//         {
//             for (int j = i * i; j <= n; j += i)
//             {
//                 sieve[j] = false;
//             }
//         }
//     }
//     for (int i = 2; i < n; i++)
//     {
//         if (sieve[i])
//         {
//             cnt++;
//         }
//     }
//     return cnt;
// }





int main()
{
    cout << (1 ^ 3);
    // vector<int> res;
    // int cnt = 0;
    // for (int x = 1; x < res.size(); x++)
    //     cnt += res[i];
    return 0;
}