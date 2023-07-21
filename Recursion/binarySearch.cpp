#include <iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int k)
{
    int mid = (s + e) / 2;
    if (s > e)
    {
        return false;
    }
    else if (arr[mid] < k)
    {
        return binarySearch(arr, mid + 1, e, k);
    }
    else if (arr[mid] > k)
    {
        return binarySearch(arr, s, mid - 1, k);
    }
    else if (arr[mid] == k)
    {
        return true;
    }
}
int main()
{
    int arr[5] = {0, 2, 3, 4, 5};
    cout << binarySearch(arr, 0, 4, 5);

    return 0;
}