#include <bits/stdc++.h>
using namespace std;

// int evenlyDivides(int N)
// {

//     vector<int> div;
//     int n = N;
//     int cnt = 0;
//     while (N)
//     {
//         div.push_back((N % 10));
//         N = N / 10;
//     }
//     for (auto it : div)
//     {

//         if (it && n % it == 0)
//             cnt++;
//     }
//     return cnt;
// }

// // vector<long long> decToBin(long long x)
// // {
// //     vector<long long> a;
// //     while (x != 0)
// //     {
// //         a.push_back((x % 2));
// //         x = x / 2;
// //     }
// //     long long sz = a.size();
// //     for (long long i = 1; i <= 32 - sz; i++)
// //     {
// //         // a.emplace(a.begin(), 0);
// //         a.push_back(0);
// //     }

// //     return a;
// // }

// // long long binToDec(vector<long long> a)
// // {
// //     long long ans = 0;
// //     long long i = 0;
// //     while (i < 32)
// //     {
// //         ans += (a[i] * pow(2, 31 - i));
// //         i++;
// //     }
// //     return ans;
// // }

// // int reverse(int x)
// // {
//     // vector<int> v;
//     // while (x)
//     // {
//     //     v.push_back(x % 10);
//     //     x = x / 10;
//     // }
//     // int ans = 0;
//     // int i = 0;
//     // for (auto it : v)
//     // {
//     //     ans+=(it * pow(10, v.size() - i - 1));
//     //     i++;
//     // }
//     // return ans;

//     // int reverse(int x)
//     // {
//     //     int rev = 0;
//     //     int di = 0;
//     //     while (x)
//     //     {
//     //         di = x % 10;
//     //         rev = rev * 10 + di;
//     //         x /= 10;
//     //     }
//     //     return rev;
//     // }
// }

// int re(int x)
// {
//     int ans = 0;

//     while (x)
//     {
//         int d = x % 10;
//         ans = ans * 10 + d;
//         x /= 10;
//     }
//     return ans;
// }
// bool isPalindrome(int x)
// {
//     if (x == re(x))
//         return true;
//     else
//         return false;
// }

long long gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    return gcd(b % a, a);
}
vector<long long> lcmAndGcd(long long A, long long B)
{

    long long gcde = gcd(A, B);

    long long lcm = (A * B) / gcde;

    return { lcm, gcde };
}
int main()
{
    vector<long long> a = lcmAndGcd(14, 26);
    // cout << a.at(0) << " " << a.at(1) << endl;
}