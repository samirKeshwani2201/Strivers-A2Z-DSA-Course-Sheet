#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {2, 3, 4, 8, 5, 6};
    int b[7] = {1, 2, 3, 5, 55, 66, 88};
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (b[j] == arr[i])
            {
                cout << arr[i] << " ";
                continue;
            }
        }
    }

    return 0;
}