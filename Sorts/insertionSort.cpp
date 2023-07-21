#include <bits/stdc++.h>
using namespace std;
void insertionSort(int n, vector<int> arr)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j;

        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {
                // ruk jao
                break;
            }
        }
        arr[j + 1] = temp;
    }
}
int main()
{

    return 0;
}