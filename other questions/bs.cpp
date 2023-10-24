#include <bits/stdc++.h>
using namespace std;
int peakIndexInMountainArray(vector<int> &arr)
{
    int s = 0;
    int end = arr.size() - 1;
    int mid = s + (end - s) / 2;
    while (s < end)
    {
        if (arr[mid] > arr[mid + 1])
        {
            end = mid;
        }
        else if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        mid = s + (end - s) / 2;
    }
    return s;
}

int main()
{

    // [24,69,100,99,79,78,67,36,26,19]

    return 0;
}