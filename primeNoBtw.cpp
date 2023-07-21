// Sieve of eratosthenes

// #include <bits/stdc++.h>
// class Solution
// {
// public:
//     int countPrimes(int n)
//     {
//         int cnt = 0;
//         vector<bool> prime(n + 1, true);
//         prime[0] = prime[1] = false;
//         for (int i = 2; i < n; i++)
//         {
//             if (prime[i])
//             {
//                 cnt++;

//                 for (int j = 2 * i; j < n; j = j + i)
//                 {
//                     prime[j] = false;
//                 }
//             }
//         }

//         return cnt; 
//     }
// };

/* Prime or not
int cnt=0;

for(int i=1;i<sqrt(n);i++)
{
    if(n%i==0)
    {
        cnt++;
        if((n/i)!=i)
        {
            cnt++;
        }
    }
}
if(cnt==2)
{
    print(Yes);
}
else
{
    print(NO);

}
