#include <bits/stdc++.h>
using namespace std;
long long sumOfSeries(long long N)
{
    if (N == 0)
        return 0;
    return   pow(N, 3)+sumOfSeries(N - 1);
}
int main()
{   
    cout<<sumOfSeries(5);


    return 0;
}