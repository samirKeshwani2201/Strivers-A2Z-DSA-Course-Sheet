// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {

//     void solve(string str, vector<string> &ans, int index)
//     {
//         if (index == str.size())
//         {
//             ans.push_back(str);

//             return;
//         }
//         for (int i = index; i < str.size(); i++)
//         {
//             swap(str[index], str[i]);
//             solve(str, ans, index+1);
//             swap(str[index], str[i]);
//         }
//     }

// public:
//      string  getPermutation(int n, int k)
//     {
//         vector<string> ans;

//         string arr;
//         for (int i = 1; i <= n; i++)
//         {
//             arr[i] = i + '0';
//         }
//         solve(arr, ans, 0);
//         return ans.at(k-1);
//     }
// };

// int main()
// {
//     Solution s;
//     vector<string> a = s.getPermutation(3, 3);

//     for (int i = 0; i < a.size(); i++)
//     {
//         cout << a[i] << " ";
//     }
// }
// // 


// // class Solution {
// //   public:
// //     //function to generate all possible permutations of a string
// //     void solve(string & s, int index, vector < string > & res) {
// //       if (index == s.size()) {
// //         res.push_back(s);
// //         return;
// //       }
// //       for (int i = index; i < s.size(); i++) {
// //         swap(s[i], s[index]);
// //         solve(s, index + 1, res);
// //         swap(s[i], s[index]);
// //       }
// //     }
// // string getPermutation(int n, int k) {
// //     string s;
// //     vector < string > res;
// //     //create string
// //     for (int i = 1; i <= n; i++) {
// //       s.push_back(i + '0');
// //     }
// //     solve(s, 0, res);
// //     //sort the generated permutations
// //     sort(res.begin(), res.end());
// //     //make k 0-based indexed to point to kth sequence
// //     auto it = res.begin() + (k - 1);
// //     return *it;
// //   }
// // };
