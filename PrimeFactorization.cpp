// #include <iostream>
// using namespace std;
// int N = 1000000;
// int sieve[N + 1]; // Array of smallest prime factors

// void createSieve()
// {
//     for (int i = 1; i <= N; i++)
//     {
//         sieve[i] = i;
//     }

//     for (int i = 2; i * i <= N; i++)
//     {
//         if (sieve[i] == i)
//         {
//             // Its a prime
//             for (int j = i * i; j <= N; j += i)
//             {
//                 if (sieve[j] == j)
//                 {
//                     sieve[j] = i;
//                 }
//             }
//         }
//     }
// }
// int main()
// {
//     int t;
//     cin >> t;
//     //n(loglog(n))
//     createSieve();
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         // Print prime factorization

//         //complexity is logn
//         while (n != 1)
//         {
//             cout << sieve[n] << " ";
//             n = n / sieve[n];
//         }
//         cout << endl;
//     }
//     return 0;
// }