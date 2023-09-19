#include <bits/stdc++.h>
using namespace std;

// A valid parentheses string is either empty "", "(" + A + ")", or A + B, where A and B are valid parentheses strings, and + represents string concatenation.

// For example, "", "()", "(())()", and "(()(()))" are all valid parentheses strings.
// A valid parentheses string s is primitive if it is nonempty, and there does not exist a way to split it into s = A + B, with A and B nonempty valid parentheses strings.

// Given a valid parentheses string s, consider its primitive decomposition: s = P1 + P2 + ... + Pk, where Pi are primitive valid parentheses strings.

// Return s after removing the outermost parentheses of every primitive string in the primitive decomposition of s.

// string removeOuterParentheses(string s)
// {
//     string ans;
//     int cnt = 0;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == '(')
//         {
//             cnt++;
//         }
//         else if (s[i] == ')')
//         {
//             cnt--;
//         }
//         if (cnt != 1 && cnt != 0)
//         {
//             ans += s[i];
//         }
//         if (cnt == 1 && s[i] == ')')
//         {
//             ans += s[i];
//         }
//     }
//     return ans;
// }

// string removeOuterParentheses(string s)
// {
//     string ans = "";
//     int cnt = 0;
//     for (char c : s)
//     {
//         if (c == ')' && cnt-- > 1)
//         {
//             ans += c;
//         }
//         else if (c == '(' && cnt++ > 0)
//         {
//             ans += c;
//         }
//     }
//     return ans;
// }

// Given an input string s, reverse the order of the words.

// A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

// Return a string of the words in reverse order concatenated by a single space.

// Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

// string reverseWords(string s)
// {
//     s = trim(s);
//     for (int i = 0; i < s.length(); i++)
//     {
//         int j = i;
//         while (s[j] == ' ')
//             j++;
//         while (j < s.size() && s[j] != ' ')
//         {
//             j++;
//         }
//         reverse(s.begin() + i, s.begin() + j);
//         i = j;
//     }
//     reverse(s.begin(), s.end());
//     return trim(s);
// }

// string trim(string s)
// {
//     int t = 0;
//     while (s[t] == ' ')
//     {
//         t++;
//     }
//     string lt = s.substr(t, s.size() - t + 1);
//     int sz = lt.size() - 1;
//     while (lt[sz] == ' ')
//     {
//         sz--;
//     }
//     lt = lt.substr(0, sz + 1);
//     return lt;
// }

// string reverseWords(string s)
// {
//     vector<string> st;
//     s = trim(s);
//     string ans = "";
//     for (int i = 0; i < s.length(); i++)
//     {
//         int j = i;
//         while (j < s.size() && s[j] == ' ')
//         {
//             j++;
//         }
//         i = j;
//         while (j < s.size() && s[j] != ' ')
//         {
//             j++;
//         }
//         st.push_back(s.substr(i, j - i));
//         i = j;
//     }
//     for (string se : st)
//     {
//         reverse(se.begin(), se.end());
//         ans += (se + " ");
//     }
//     reverse(ans.begin(), ans.end());
//     return trim(ans);
// }

// string reverseWords(string s)
// {
//     int storeindex = 0;
//     reverse(s.begin(), s.end());
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] != ' ')
//         {
//             if (storeindex != 0)
//             {
//                 s[storeindex++] = ' ';
//             }
//             int j = i;
//             while (j < s.size() && s[j] != ' ')
//             {
//                 s[storeindex++] = s[j++];
//             }
//             reverse(s.begin() + storeindex - (j - i), s.begin() + storeindex);
//             i = j;
//         }
//     }
//     s.erase(s.begin()+storeindex,s.end());
//     return s;
// }

// You are given a string num, representing a large integer. Return the largest-valued odd integer (as a string) that is a non-empty substring of num, or an empty string "" if no odd integer exists.

// A substring is a contiguous sequence of characters within a string.

// string largestOddNumber(string num)
// {
//     int cnt = num.size();
//     while (cnt - 1 >= 0 && (num[cnt - 1] - '0') % 2 == 0)
//     {
//         cnt--;
//     }
//     return num.substr(0, cnt);
// }

// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

// string longestCommonPrefix(vector<string> &strs)
// {
//     int cnt = 0;
//     int maxsz = INT_MAX;
//     for (string s : strs)
//     {
//         maxsz = min(maxsz, (int)s.size());
//     }
//     while (cnt < maxsz)
//     {
//         char t = strs[0][cnt];
//         bool f = true;
//         for (string s : strs)
//         {
//             if (s[cnt] != t)
//             {
//                 f = false;
//                 break;
//             }
//         }
//         if (!f)
//         {
//             break;
//         }
//         cnt++;
//     }
//     return strs[0].substr(0, cnt);
// }

// string longestCommonPrefix(vector<string> &strs)
// {
//     sort(strs.begin(), strs.end());
//     string f = strs[0];
//     string l = strs[strs.size() - 1];
//     int c = 0;
//     while (c < f.size() && f[c] == l[c])
//     {
//         c++;
//     }
//     return f.substr(0, c);
// }

// Given two strings s and t, determine if they are isomorphic.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

bool isIsomorphic(string s, string t)
{
}

int main()
{  
    return 0;
}
