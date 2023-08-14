#include <bits/stdc++.h>
using namespace std;

int exponent(int a, int N)
{
    if (N == 0)
    {
        return 1;
    }
    else if (N == 1)
    {
        return a;
    }
    else
    {
        int R = exponent(a, N / 2);
        if (N % 2 == 0)
            return R * R;
        else
        {
            return R * R * a;
        }
    }
}

int main()
{
    cout << exponent(8, 100);
    return 0;
}