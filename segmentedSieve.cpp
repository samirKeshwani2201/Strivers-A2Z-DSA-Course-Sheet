// #include <bits/stdc++.h>
// using namespace std;

// int N = 1000000;
// bool sieve[N + 1];

// void createSieve()
// {
//     for (int i = 2; i <= N; i++)
//     {
//         sieve[i] = true;
//     }
//     for (int i = 2; i * i <= N; i++)
//     {
//         if (sieve[i] == true)
//         {
//             for (int j = i * i; j <= N; j++)
//             {
//                 sieve[j] = false;
//             }
//         }
//     }
// }

// vector<int> generatePrimes(int N)
// {
//     vector<int> ds;
//     for (int i = 2; i <= N; i++)
//     {
//         if (sieve[i] == true)
//         {
//             ds.push_back(i);
//         }
//     }
//     return ds;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     createSieve();

//     while (t--)
//     {
//         int l, r;
//         cin >> l >> r;
//         // step 1:
//         // Generate all primes till sqrt(r)

//         vector<int> primes = generatePrimes(sqrt(r));

//         // Step 2: Creating a dummy array of size r-l+1 and make all true
//         int dummy[r - l + 1];
//         for (int i = 0; i < r - l + 1; i++)
//         {
//             dummy[i] = 1;
//         }

//         // Step 3: for all prime number marks its multiples as false
//         for (auto pr : primes)pr
//         {
//             int firstMultiple = (l*pr)*pr;
//             if(firstMultiple<l)
//             {
//                 firstMultiple+=pr;

//             }
//             for (int j = max(firstMultiple, pr * pr); j <= r; j += pr)
//             {
//                 dummy[j - l] = 0;
//             }
//         }

//         // step 4: get all the primes

//         for (int i = l; i <= r; i++)
//         {
//             if (dummy[i - l] == 1)
//             {
//                 // Prime number
//                 cout << i << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }