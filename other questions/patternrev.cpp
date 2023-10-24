#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int space;
    for (int i = 0; i < (2 * n) - 1; i++)
    {
        int stars;
        if (i < n)
        {
            space = 2 * n - 2 * i - 2;
            stars = i;
        }
        else
        {
            space = (i - n) * 2 + 2;
            stars = n - (i - n) - 2;
        }
        for (int j = 0; j <= stars; j++)
        {
            cout << "*";
        }
        for (int s = 0; s < space; s++)
        {
            cout << " ";
        }
        for (int j = 0; j <= stars; j++)
        {
            cout << "*";
        }
        space -= 2;
        cout << endl;
    }
    return 0;
}

// for (int i = 0; i < 2 * n; i++)
// {
//     if (i < n)
//     {
//         for (int j = 0; j <= n - i - 1; j++)
//         {
//             cout << "*";
//         }

//         for (int k = 0; k < 2 * i; k++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j <= n - i - 1; j++)
//         {
//             cout << "*";
//         }
//     }
//     else
//     {
//         int ti = i - n;
//         for (int j = 0; j <= ti; j++)
//         {
//             cout << "*";
//         }

//         for (int k = 0; k < 2 * n - 2 * ti - 2; k++)
//         {
//             cout << " ";
//         }

//         for (int j = ti; j >= 0; j--)
//         {
//             cout << "*";
//         }
//     }
//     cout << endl;
// }

// class Solution {
//   public:
//     void printTriangle(int n) {
//         // code here
//         for(int i=0; i<2*n; i++)
//         {
//             int stars,space;
//             if(i<n)
//             {
//                 stars=n-i;
//                 space=2*i;
//             }
//             else
//             {
//                 stars=i-n+1;
//                 space=4*n-2*i-2;
//             }
//             for(int st=0; st<stars; st++)
//             {
//                 cout<<"*";
//             }
//             for(int sp=0; sp<space; sp++)
//             {
//                 cout<<" ";
//             }
//             for(int st=0; st<stars; st++)
//             {
//                 cout<<"*";
//             }
//             cout<<endl;
//         }
//     }
// };

// Approach imp
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 0; i < 2 * n - 1; i++)
//     {
//         for (int j = 0; j < 2 * n - 1; j++)
//         {
//             int top = i;
//             int left = j;
//             int bottom = (2 * n - 2) - i;
//             int right = (2 * n - 2) - j;
//             cout << n - min(min(left, right), min(top, bottom)) << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
