#include <bits/stdc++.h>
// abbabbba
using namespace std;
class Solution
{
public:
    string removeDuplicates(string s)
    {
        string st = "";
        st.push_back(s[0]);

        for (int i = 1; i < s.length(); i++)
        {

            if (st.back() != s[i])
            {
                st.push_back(s[i]);
            }
            else if (!(st.empty()) && st.back() == s[i])
            {
                st.pop_back();
            }
        }

        return st;
    }
};
int main()
{

    return 0;
}

/*
class Solution {
public:
    string removeDuplicates(string s) {
        string res = "";
        for (char c : s) {
            if (!res.empty() && res.back() == c) {
                res.pop_back();
            } else {
                res.push_back(c);
            }
        }
        return res;
    }
};
*/