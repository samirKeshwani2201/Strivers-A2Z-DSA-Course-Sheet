#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t = n;

    int c = 0;
    float ans = 0;
    while (t != 0)
    {
        t = t >> 1;
        c++;
    }
    int mask;

    while (c != 0)
    {
        mask = (mask) | 1;
        mask = mask << 1;
        c--;
    }
    cout << ((~n) & mask) << endl;

    return 0;
}