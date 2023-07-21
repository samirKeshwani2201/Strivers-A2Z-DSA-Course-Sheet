// #include <bits/stdc++.h>


// void solve(vector<string> &ans, string str, string output, int index)
// {
//     if (index >= str.size())
//     {
//         ans.push_back(output);
//         return;
//     }

//     // exclude
//     solve(ans, str, output, index + 1);

//     // include
//     char ele = str[index];
//     output.push_back(ele);
//     solve(ans, str, output, index + 1);
// }
// vector<string> subsequences(string str)
// {
//     vector<string> ans;
//     string output = "";

//     int index = 0;
//     solve(ans, str, output, index);
//     return ans;
// }
