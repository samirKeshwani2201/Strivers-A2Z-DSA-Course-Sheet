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

// bool isUniVal(map<char, char> mp, char t)
// {
//     for (auto it : mp)
//     {
//         if (it.second == t)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// bool isIsomorphic(string s, string t)
// {
//     if (s.size() != t.size())
//         return false;
//     map<char, char> mp;
//     int sz = s.size();
//     for (int i = 0; i < sz; i++)
//     {
//         if (mp.find(s[i]) == mp.end())
//         {
//             if (!isUniVal(mp, t[i]))
//                 return false;
//             mp[s[i]] = t[i];
//         }
//         else
//         {
//             if (mp[s[i]] != t[i])
//             {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// bool isIsomorphic(string s, string t)
// {
//     if (s.size() != t.size())
//         return false;
//     char mp[128] = {0};
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (mp[s[i]] == 0)
//         {
//             for (char c : mp)
//             {
//                 if (c == t[i])
//                     return false;
//             }
//             mp[s[i]] = t[i];
//         }
//         else
//         {
//             if (mp[s[i]] != t[i])
//                 return false;
//         }
//     }
//     return true;
// }

// Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

// A shift on s consists of moving the leftmost character of s to the rightmost position.

// For example, if s = "abcde", then it will be "bcdea" after one shift.

// bool rotateString(string s, string goal)
// {
//     if (s.size() != goal.size())
//         return false;
//     int cnt = 0;
//     while (cnt < s.size())
//     {
//         cnt++;
//         char t = s[0];
//         for (int i = 0; i < s.size() - 1; i++)
//         {
//             s[i] = s[i + 1];
//         }
//         s[s.size() - 1] = t;
//         if (s == goal)
//             return true;
//     }
//     return false;
// }

// bool rotateString(string s, string goal)
// {
//     return s.size() == goal.size() && (s + s).find(goal) != string::npos;
// }

// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

// bool isAnagram(string s, string t)
// {
//     if (s.size() != t.size())
//         return false;
//     map<char, int> f1, f2;
//     for (int i = 0; i < s.size(); i++)
//     {
//         f1[s[i]]++;
//     }
//     for (int i = 0; i < t.size(); i++)
//     {
//         f2[t[i]]++;
//     }
//     return f1 == f2;
// }

// bool isAnagram(string s, string t)
// {
//     // 97 to 122
//     if (s.size() != t.size())
//         return false;
//     int a1[26] = {0}, a2[26] = {0};
//     for (int i = 0; i < s.size(); i++)
//     {
//         a1[s[i] - 97]++;
//     }
//     for (char c : t)
//     {
//         a2[c - 97]++;
//     }
//     for (int i = 0; i < 26; i++)
//     {
//         if (a1[i] != a2[i])
//             return false;
//     }
//     return true;
// }

// string sortByFrequency(int n, string &s)
// {
//     string ans = "";
//     int a[57] = {0};
//     for (char c : s)
//     {
//         a[c - 'A']++;
//     }
//     for (int i = 56; i >= 0; i--)
//     {
//         if (a[i])
//         {
//             for (int j = 0; j < a[i]; j++)
//             {
//                 ans += char('A' + i);
//             }
//         }
//     }
//     return ans;
// }

// cn

// string sortByFrequency(int n, string &s)
// {
//     int arr[256] = {0};
//     string ans = "";
//     for (char c : s)
//     {
//         arr[c]++;
//     }
//     sort(arr, arr + 256);
//     for (int i = 255; i >= 0; i--)
//     {
//         if (arr[i] != 0)
//         {
//             ans += string(arr[i], char(i));
//         }
//     }
//     return ans;
// }

// A string is a valid parentheses string (denoted VPS) if it meets one of the following:
// It is an empty string "", or a single character not equal to "(" or ")",
// It can be written as AB (A concatenated with B), where A and B are VPS's, or
// It can be written as (A), where A is a VPS.
// We can similarly define the nesting depth depth(S) of any VPS S as follows:
// depth("") = 0
// depth(C) = 0, where C is a string with a single character not equal to "(" or ")".
// depth(A + B) = max(depth(A), depth(B)), where A and B are VPS's.
// depth("(" + A + ")") = 1 + depth(A), where A is a VPS.
// For example, "", "()()", and "()(()())" are VPS's (with nesting depths 0, 1, and 2), and ")(" and "(()" are not VPS's.

// Given a VPS represented as string s, return the nesting depth of s.

// int maxDepth(string s)
// {
//     stack<char> t;
//     int ans = 0;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == '(')
//         {
//             t.push(s[i]);
//         }
//         if (s[i] == ')')
//         {
//             ans = max(ans, (int)t.size());
//             t.pop();
//         }
//     }
//     return ans;
// }

// int maxDepth(string s)
// {
//     int ans = 0;
//     int cnt = 0;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == '(')
//         {
//             cnt++;
//         }
//         else if (s[i] == ')')
//         {
//             ans = max(ans, cnt);
//             cnt--;
//         }
//     }
//     return ans;
// }

// Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
// For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.
// Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:
// I can be placed before V (5) and X (10) to make 4 and 9.
// X can be placed before L (50) and C (100) to make 40 and 90.
// C can be placed before D (500) and M (1000) to make 400 and 900.
// Given a roman numeral, convert it to an integer.

// int romanToInt(string s)
// {
//     map<char, int> da;
//     da['I'] = 1;
//     da['V'] = 5;
//     da['X'] = 10;
//     da['L'] = 50;
//     da['C'] = 100;
//     da['D'] = 500;
//     da['M'] = 1000;
//     int ans = 0;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (i + 1 < s.size() && s[i] == 'I')
//         {
//             if (s[i + 1] == 'V')
//             {
//                 ans += 4;
//                 i++;
//                 continue;
//             }
//             else if (s[i + 1] == 'X')
//             {
//                 ans += 9;
//                 i++;
//                 continue;
//             }
//         }
//         else if (i + 1 < s.size() && s[i] == 'X')
//         {
//             if (s[i + 1] == 'L')
//             {
//                 ans += 40;
//                 i++;
//                 continue;
//             }
//             else if (s[i + 1] == 'C')
//             {
//                 ans += 90;
//                 i++;
//                 continue;
//             }
//         }
//         else if (i + 1 < s.size() && s[i] == 'C')
//         {
//             if (s[i + 1] == 'D')
//             {
//                 ans += 400;
//                 i++;
//                 continue;
//             }
//             else if (s[i + 1] == 'M')
//             {
//                 ans += 900;
//                 i++;
//                 continue;
//             }
//         }
//         ans += da[s[i]];
//     }
//     return ans;
// }

// int romanToInt(string s)
// {
//     map<char, int> da;
//     da['I'] = 1;
//     da['V'] = 5;
//     da['X'] = 10;
//     da['L'] = 50;
//     da['C'] = 100;
//     da['D'] = 500;
//     da['M'] = 1000;
//     int sum = da[s.back()];
//     for (int i = s.size() - 2; i >= 0; i--)
//     {
//         if (da[s[i]] > da[s[i + 1]])
//         {
//             sum -= da[s[i]];
//         }
//         else
//         {
//             sum += da[s[i]];
//         }
//     }
//     return sum;
// }

// int romanToInt(string s)
// {
//     unordered_map<char, int> m = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
//     int ans = 0;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (m[s[i]] < m[s[i + 1]])
//         {
//             ans -= m[s[i]];
//         }
//         else
//         {
//             ans += m[s[i]];
//         }
//     }
//     return ans;
// }

// Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer (similar to C/C++'s atoi function).
// The algorithm for myAtoi(string s) is as follows:
// Read in and ignore any leading whitespace.
// Check if the next character (if not already at the end of the string) is '-' or '+'. Read this character in if it is either. This determines if the final result is negative or positive respectively. Assume the result is positive if neither is present.
// Read in next the characters until the next non-digit character or the end of the input is reached. The rest of the string is ignored.
// Convert these digits into an integer (i.e. "123" -> 123, "0032" -> 32). If no digits were read, then the integer is 0. Change the sign as necessary (from step 2).
// If the integer is out of the 32-bit signed integer range [-231, 231 - 1], then clamp the integer so that it remains in the range. Specifically, integers less than -231 should be clamped to -231, and integers greater than 231 - 1 should be clamped to 231 - 1.
// Return the integer as the final result.
// Note:
// Only the space character ' ' is considered a whitespace character.
// Do not ignore any characters other than the leading whitespace or the rest of the string after the digits.

// int myAtoi(string s)
// {
//     int t = 0;
//     while (s[t] == ' ')
//     {
//         t++;
//     }
//     s = s.substr(t, s.size() - t + 1);
//     int number;
//     if (!s.size())
//         return 0;
//     bool isneg = false;
//     int i = 0;
//     if (s[0] == '-')
//     {
//         isneg = true;
//         i++;
//     }
//     else if (s[0] == '+')
//         i++;
//     double ans = 0;
//     for (; i < s.size(); i++)
//     {
//         if (s[i] >= '0' && s[i] <= '9')
//         {
//             ans = ans * 10 + (s[i] - '0');
//         }
//         else
//             break;
//     }
//     if (isneg)
//         ans *= -1;
//     ans = (ans > INT_MAX) ? INT_MAX : ans;
//     ans = (ans < INT_MIN) ? INT_MIN : ans;
//     return ans;
// }

//   int myAtoi(string str) {
//         int r = 0;
//         stringstream ss;
//         ss << str;
//         ss >> r;
//         return r;
//     }

// Given a string s, return the longest palindromic substring in s.

string longestPalindrome(string s)
{
    
}

int main()
{
    string ans = "   ";
    cout << "c" << ans.size() << "c";
    return 0;
}
