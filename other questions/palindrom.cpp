
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            return true;
        }
        return false;
    }
    char toLowerCase(char ch)
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            return ch - 'A' + 'a';
        }
        return ch;
    }
    bool checkPalindrome(string s)
    {
        int st = 0;

        string t = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (isValid(s[i]))
            {
                t.push_back(s[i]);
            }
        }
        int e = t.size() - 1;
        while (st <= e)
        {

            if (toLowerCase(t[st]) != toLowerCase(t[e]))
            {
                return false;
            }

            st++;
            e--;
        }
        return true;
    }
};