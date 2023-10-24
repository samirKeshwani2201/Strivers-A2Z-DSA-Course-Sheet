#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int compress(vector<char> &chars)
    {
        int i = 0;
        int ansIndex = 0;
        while (i < chars.size())
        {
            int count = 0;
            char newChar = chars[i];
            chars[ansIndex++] = newChar;

            while ( i < chars.size() && chars[i] == newChar  )
            {
                i++;
                count++;
            }
            if (count > 1)
            {
                string cnt = to_string(count);
                for (char ch : cnt)
                {
                    chars[ansIndex++] = ch;
                }
            }
        }
        return ansIndex;
    }
};
int main()
{

    return 0;
}

/*
class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int ansIndex=0;
        int n=chars.size();
        while(i<n)
        {
            int j=i+1;
            while(j<n && chars[i]==chars[j])
            {
                j++;
            }

            chars[ansIndex++]=chars[i];
            int count=j-i;
            if(count>1)
            {
                //converting int to character
                string cnt=to_string(count);
                for(char ch:cnt)
                {
                    chars[ansIndex++]=ch;

                }
            }

            i=j;





        }
        return ansIndex;

    }
};*/