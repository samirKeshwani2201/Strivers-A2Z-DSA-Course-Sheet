#include <bits/stdc++.h>

class Solution
{
public:
    string getPermutation(int n, int k)
    {
        int fact = 1;
        vector<int> numbers;
        for (int i = 1; i < n; i++)
        {
            fact = fact * i;
            numbers.push_back(i);
        }
        //We did n-1 factorial
        
        numbers.push_back(n);

        string ans = "";

        k--;
        // We deducted 1 becoz we want ans in zero base indexing

        while (true)
        {
            ans = ans + to_string(numbers[k / fact]);
            numbers.erase(numbers.begin() + (k / fact));
            if (numbers.size() == 0)
            {
                break;
            }
            k = k / fact;
            fact = fact / numbers.size();
        }

        return ans;
    }
};
using namespace std;

int main()
{

    return 0;
}